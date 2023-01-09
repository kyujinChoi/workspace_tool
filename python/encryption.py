import os
# import sys


# file_path = sys.argv[1]

# if len(sys.argv) != 2:
#     print("Insufficient arguments")
#     sys.exit()

# print("File path : " + file_path)
# info_encryp info

inFile = open("../info.cfg", 'r', encoding='utf-8')
outFile = open("../info_encryp.cfg", 'w', encoding='utf-8')
# inFos = inFile.readlines()

# print("0 : " + inFos[0])
# print("1 : " + inFos[1])
# confirmBtn.click()


secuYN = input("1. 암호화 2.복호화: ")
secu = 0
if secuYN == '1':
    secu = 50
elif secuYN == '2':
    secu = -50
else:
    secu = 0
    print("잘못 입력되었습니다.")

for inStr in inFile.readlines():
    out_str = ""
    for s in inStr:
        tmp = ord(s) + secu
        out_str += chr(tmp)
    print(out_str)
    outFile.writelines(out_str)



inFile.close()
outFile.close()