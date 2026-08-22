#pragma once

#include <fstream>
#include <iostream>
#include <vector>

std::ifstream fin("sudoku.in");
std::ofstream fout("sudoku.out");

struct Missing {
    int i, j;
};
