#include "../include/common.h"
#include "../include/functions.h"

bool solver(std::vector<std::vector<int>>& sudoku, std::vector<Slot>& emptySlots, int slot, long long& checks) {
    Slot current = emptySlots[slot];
    std::vector<int> possible = checker(sudoku, current);
    checks++;

    if (possible.size() == 0) {
        sudoku[current.i][current.j] = 0;
        return false;
    }

    for (int i : possible) {
        sudoku[current.i][current.j] = i;

        if (slot + 1 >= emptySlots.size()) { return true; }

        bool next = solver(sudoku, emptySlots, slot + 1, checks);

        if (next) { return true; }
        else { sudoku[current.i][current.j] = 0; }
    }

    return false;
}