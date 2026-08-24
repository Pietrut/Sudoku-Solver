#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <chrono>

extern std::ifstream fin;
extern std::ofstream fout;

struct Slot {
    int i, j;
};
