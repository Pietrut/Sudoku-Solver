#include "../include/common.h"
#include "../include/functions.h"

std::vector<int> checker(const std::vector<std::vector<int>>& sudoku, const Slot& slot) {
    std::array<bool, 9> possible = {true, true, true, true, true, true, true, true, true};
    std::vector<int> result;
    
    Slot sqrStart = {((slot.i + 3) / 3 - 1) * 3, ((slot.j + 3) / 3 - 1) * 3};
    Slot sqrEnd = {sqrStart.i + 2, sqrStart.j + 2};

    for (int i = 0; i < sudoku.size(); i++) {
        int number;

        if (i == slot.i) {
            // Horizontal check
            for (int j = 0; j < sudoku.size(); j++) {
                number = sudoku[i][j];

                if (number == 0) { continue; }
                possible[number - 1] = false;
            }
        } else {
            // Vertical check
            number = sudoku[i][slot.j];

            if (number != 0) {
                possible[number - 1] = false;
            }
        }

        // Square check
        if (i >= sqrStart.i && i <= sqrEnd.i && i != slot.i) {
            for (int j = sqrStart.j; j <= sqrEnd.j; j++) {
                if (j == slot.j) { continue; }

                number = sudoku[i][j];
                if (number == 0) { continue; }

                possible[number - 1] = false;
            }
        }
    }

    for (int i = 0; i < possible.size(); i++) {
        if (possible[i]) {
            result.push_back(i + 1);
        }
    }

    return result;
}