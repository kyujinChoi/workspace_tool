from selenium import webdriver
from selenium.common.exceptions import NoSuchElementException
from selenium.webdriver.common.by import By
# from selenium.webdriver.support import expected_conditions as EC
# from selenium.webdriver.support.ui import WebDriverWait as wait
# from selenium.webdriver.common.keys import Keys
# from selenium.webdriver.common.alert import Alert
import time
import os
# import sys

def encryption(list):
    result=[]
    for str in list:
        out_str = ""
        for s in str:
            tmp = ord(s) + 50
            out_str += chr(tmp)
        result.append(out_str)
    return result

def decryption(list):
    result=[]
    for str in list:
        out_str = ""
        for s in str:
            tmp = ord(s) - 50
            out_str += chr(tmp)
            if(chr(tmp) == '\n'):
                result.append(out_str)
                out_str = ""
            
    return result

inFile = open("../info.cfg", 'r', encoding='utf-8')

inFos=decryption(inFile.readlines())
# print(inFos[1])
del inFos[2:]
outFile = open("../info.cfg", 'w', encoding='utf-8')


driver = webdriver.Chrome('./chromedriver')
driver.get("https://mobiltech.ncpworkplace.com/user/commute-status")

driver.find_element(By.ID, 'user').send_keys(inFos[0])
driver.find_element(By.ID, 'password').send_keys(inFos[1])
driver.find_element(By.ID, 'loginBtn').click()

time.sleep(3)

# for str in inFos:
#     print(str)
try:
    bodyConts = driver.find_element(By.ID, 'bodyConts')
    contsTable = bodyConts.find_elements(By.TAG_NAME, 'tr')
    for cont in contsTable:
        times = cont.find_elements(By.CLASS_NAME, 'td-text.text-center')
        inFos.append(times[1].text[0:5] + '\n')
        inFos.append(times[2].text[0:5] + '\n')
        # if(times[2].text == ""):
        #     print("is NULL")
    
    for str in encryption(inFos):
        outFile.writelines(str)
    # for str in inFos:
    #     outFile.writelines(str)
    
################################
    # clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
    # clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

except NoSuchElementException:
    print("yes NoSuchElementException")
    time.sleep(3)
    inFile.close()
    driver.close()

time.sleep(1)
inFile.close()
driver.close()

