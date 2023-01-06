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


# file_path = sys.argv[1]

# if len(sys.argv) != 2:
#     print("Insufficient arguments")
#     sys.exit()

# print("File path : " + file_path)

inFile = open("../info.cfg", 'r', encoding='utf-8')
inFos = inFile.readlines()

print("0 : " + inFos[0])
print("1 : " + inFos[1])
# confirmBtn.click()


driver = webdriver.Chrome('./chromedriver')
driver.get("https://mobiltech.ncpworkplace.com/user/commute-status")

driver.find_element(By.ID, 'user').send_keys(inFos[0])
driver.find_element(By.ID, 'password').send_keys(inFos[1])
driver.find_element(By.ID, 'loginBtn').click()

# iframes = driver.find_elements_by_css_selector('iframe')
time.sleep(3)

try:
    bodyConts = driver.find_element(By.ID, 'bodyConts')
    contsTable = bodyConts.find_elements(By.TAG_NAME, 'tr')
    # print(contsTable.get_attribute("outerHTML"))
    for cont in contsTable:
        times = cont.find_elements(By.CLASS_NAME, 'td-text.text-center')
        # for time in cont.find_elements(By.CLASS_NAME, 'td-text.text-center'):
        print(times[1].text[0:5])
        print(times[2].text[0:5])
        if(times[2].text == ""):
            print("is NULL")
        print("")
        
    
################################
    # clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
    # clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

except NoSuchElementException:
    print("yes NoSuchElementException")
    time.sleep(3)
    driver.close()

time.sleep(2)
driver.close()

