#include "../include/common.h"
#include "../include/functions.h"

std::vector<int> checker(const std::vector<std::vector<int>>& sudoku, const Slot& slot) {
    std::vector<int> possible = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> result;
    
    Slot sqrStart = {((slot.i + 3) / 3 - 1) * 3, ((slot.j + 3) / 3 - 1) * 3};
    Slot sqrEnd = {sqrStart.i + 2, sqrStart.j + 2};

    for (int i = 0; i < sudoku.size() - 1; i++) {
        int number;

        if (i == slot.i) {
            // Horizontal check
            for (int j = 0; j < sudoku.size() - 1; j++) {
                number = sudoku[i][j];

                if (number == 0) { continue; }
                possible[number - 1] = 0;
            }
        } else {
            // Vertical check
            number = sudoku[i][slot.j];

            if (number != 0) {
                possible[number - 1] = 0;
            }
        }

        // Square check
        if (i >= sqrStart.i && i <= sqrEnd.i && i != slot.i) {
            for (int j = sqrStart.j; j <= sqrEnd.j; j++) {
                if (j == slot.j) { continue; }

                number = sudoku[i][j];
                if (number == 0) { continue; }

                possible[number - 1] = 0;
            }
        }
    }

    for (int i : possible) {
        if (i == 0) { continue; }
        result.push_back(i);
    }

    return result;
}