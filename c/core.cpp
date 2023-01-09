#include "core.h"

#include <fstream>

#include <codecvt>
#include <sstream>

std::string decryption(std::wstring wstr)
{
    std::string str;
    str.assign(wstr.begin(), wstr.end());
    int ch;
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    for(int i = 0 ; i < strlen(cstr) ; i++)
    {
        ch = cstr[i] - 50;
        // std::cout << (char)ch << "(" << ch <<"), ";
        cstr[i] = (char)ch;
        
    }
    std::string result(cstr);
    // std::cout << "result : " << result << std::endl;
    delete [] cstr;
    return result;
}
std::string getConfig()
{
    std::wifstream wif("../../info.cfg");
    std::locale loc(std::locale::classic(), new std::codecvt_utf8<wchar_t>);
    wif.imbue(loc);
    std::wstring line;
    std::getline(wif, line);
    // std::cout << "\nstrlen : "<<line.length() << std::endl;
    return decryption(line);
}
std::vector<std::string> splitConfig(std::string cfg)
{
    std::vector<std::string> result;
    std::stringstream ss(cfg);
    std::string temp;
 
    while (getline(ss, temp, '\n')) {
        result.push_back(temp);
    }
 
    return result;
}
