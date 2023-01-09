#pragma once

#include <cstring>
#include <iostream>
#include <vector>
#include <time.h>

std::string getConfig();
std::vector<std::string> splitConfig(std::string cfg);
void getCurrentTime(struct tm* cur_time);
int getState(struct tm* cur_time, std::vector<std::string> &cfg_vec);