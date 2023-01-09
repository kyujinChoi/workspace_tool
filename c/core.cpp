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
        // if(temp == "")
        //     std::cout << "isNULL\n";
    }
 
    return result;
}
void getCurrentTime(struct tm* cur_time)
{
    time_t timer;
    
    timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
    cur_time = localtime(&timer); 

    // std::stringstream fn;

    // fn << std::setw(2) << std::setfill('0') << (t->tm_year + 1900) % 100;
    // fn << std::setw(2) << std::setfill('0') << t->tm_mon + 1;
    // fn << std::setw(2) << std::setfill('0') << t->tm_mday;
    // fn << std::setw(2) << std::setfill('0') << t->tm_hour;
    // fn << std::setw(2) << std::setfill('0') << t->tm_min;
    // fn << std::setw(2) << std::setfill('0') << t->tm_sec;
    // printf("현재 요일: %d\n", t->tm_wday); // 일=0, 월=1, 화=2, 수=3, 목=4, 금=5, 토=6
    // printf("올해 몇 번째 날: %d\n", t->tm_yday); // 1월 1일은 0, 1월 2일은 1
    // printf("서머타임 적용 여부: %d\n", t->tm_isdst); // 실시 중이면 양수, 미실시면 0, 실시 정보가 없으면 음수
    // cur_time = fn.str();
}
int getState(struct tm* cur_time, std::vector<std::string> &cfg_vec)
{
    int in_cnt = 0;
    int out_cnt = 0;
    int state = -1;
    for(int i = 2 ; i < cfg_vec.size(); i++)
    {
        if((i % 2 == 0) && (cfg_vec[i] != ""))
            in_cnt++;
        else if((i % 2 != 0) && (cfg_vec[i] != ""))
            out_cnt++;
    }

    if(in_cnt > out_cnt)
        state = 1;
    else
    {
        if((cfg_vec[cur_time->tm_wday * 2] == "") && (cfg_vec[cur_time->tm_wday * 2 + 1] == ""))
            state = 0;
        else if ((cfg_vec[cur_time->tm_wday * 2] != "") && (cfg_vec[cur_time->tm_wday * 2 + 1] != ""))
            state = 2;
    }
    return state;
}
