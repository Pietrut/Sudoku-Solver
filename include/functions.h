#pragma once

#include "common.h"

std::vector<int> checker(const std::vector<std::vector<int>>& sudoku, const Slot& slot);
void write(const std::vector<std::vector<int>>& sudoku);
void solver(const std::vector<std::vector<int>>& sudoku, const std::vector<Slot>& emptySlots);