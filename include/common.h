#pragma once

#include <fstream>
#include <vector>
#include <chrono>

extern std::ifstream fin;
extern std::ofstream fout;

struct Slot {
    int i, j;
};
