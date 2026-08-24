#include "../include/common.h"
#include "../include/functions.h"

void write(const std::vector<std::vector<int>>& sudoku, const long long& duration) {
    for (int i = 0; i < sudoku.size(); i++) {
        for (int j = 0; j < sudoku.size(); j++) {
            fout << sudoku[i][j] << ' ';

            if (j == 2 || j == 5) {
                fout << "┃ ";
            }
        }
        fout << '\n';

        if (i == 2 || i == 5) {
            fout << "━━━━━━╋━━━━━━━╋━━━━━━\n";
        }
    }

    fout << "\nSolved in: " << duration << " microseconds";
}