#include "../include/common.h"

int main() {
    std::vector<std::vector<int>> sudoku;
    std::vector<Missing> emptySlots;

    char current;
    int row = 0, col = 0;
    sudoku.push_back({});

    while (fin.get(current)) {
        if (current >= '1' && current <= '9') {
            sudoku[row].push_back(current - '0');
            col++;
        } else if (current == '0' || current == 'X') {
            sudoku[row].push_back(0);
            emptySlots.push_back({row, col});
            col++;
        }

        if (col == 9) {
            row++;
            sudoku.push_back({});

            col = 0;
        }
    }


    return 0;
}