#pragma once

#include "common.h"

std::vector<int> checker(const std::vector<std::vector<int>>* sudoku, const Missing* slot);
void solver(const std::vector<std::vector<int>>* sudoku, const std::vector<Missing>* emptySlots);