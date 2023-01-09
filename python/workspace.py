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

inFile = open("../info_backup.cfg", 'r', encoding='utf-8')
inFos = inFile.readlines()

# print("0 : " + inFos[0])
# print("1 : " + inFos[1])
# confirmBtn.click()


driver = webdriver.Chrome('./chromedriver')
driver.get("https://mobiltech.ncpworkplace.com/v/home/")

driver.find_element(By.ID, 'user').send_keys(inFos[0])
driver.find_element(By.ID, 'password').send_keys(inFos[1])
driver.find_element(By.ID, 'loginBtn').click()

# iframes = driver.find_elements_by_css_selector('iframe')
time.sleep(3)
# exit()
try:
    targetBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black')
    if(not targetBtn.get_attribute("disabled")) :
        print(targetBtn.get_attribute("outerHTML"))
        targetBtn.click()
        time.sleep(1)
        confirmBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black.btn_pop_confirm')
        print(confirmBtn.get_attribute("outerHTML"))
        # confirmBtn.click()
    
################################
    # clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
    # clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

except NoSuchElementException:
    print("yes NoSuchElementException")
    time.sleep(3)
    driver.close()

time.sleep(1)
driver.close()

# 출근 버튼 누를때
# try:
#     clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black')
#     clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

#     if(not clockInBtn.get_attribute("disabled") and clockOutBtn.get_attribute("disabled")):
#         print(clockInBtn.get_attribute("outerHTML"))
#         print(clockOutBtn.get_attribute("outerHTML"))
#         clockInBtn.click()
#         time.sleep(1)
#         confirmBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black.btn_pop_confirm')
#         print(confirmBtn.get_attribute("outerHTML"))
        
#     time.sleep(1)
#     driver.close()
# ################################
#     # clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
#     # clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

# except NoSuchElementException:
#     print("yes NoSuchElementException")
#     time.sleep(3)
#     # driver.close()
###########################3

# 퇴근 버튼 누를때
# try:
#     clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
#     clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black.btn-off')

#     if(clockInBtn.get_attribute("disabled") and not clockOutBtn.get_attribute("disabled")):
#         print(clockInBtn.get_attribute("outerHTML"))
#         print(clockOutBtn.get_attribute("outerHTML"))
#         clockOutBtn.click()
#         time.sleep(1)
#         confirmBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.black.btn_pop_confirm')
#         print(confirmBtn.get_attribute("outerHTML"))
#     time.sleep(1)
#     driver.close()
# ################################
#     # clockInBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1.btn-on')
#     # clockOutBtn = driver.find_element(By.CLASS_NAME, 'btn.btn-md.line-1')

# except NoSuchElementException:
#     print("yes NoSuchElementException")
#     time.sleep(3)
    # driver.close()
# 퇴근 버튼 누르면

