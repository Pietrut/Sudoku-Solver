#pragma once

#include "common.h"

std::vector<int> checker(const std::vector<std::vector<int>>& sudoku, const Slot& slot);
void write(const std::vector<std::vector<int>>& sudoku, const long long& duration, long long& checks);
bool solver(std::vector<std::vector<int>>& sudoku, std::vector<Slot>& emptySlots, int slot, long long& checks);