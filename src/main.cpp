#include "../include/common.h"
#include "../include/functions.h"

std::ifstream fin("sudoku.in");
std::ofstream fout("sudoku.out");

int main() {
    std::vector<std::vector<int>> sudoku;
    std::vector<Slot> emptySlots;

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

    std::vector<int> result = checker(sudoku, emptySlots[0]);

    for (int i : result) {
        std::cout << i << '\n';
    }

    return 0;
}