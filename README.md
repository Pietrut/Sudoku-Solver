# Sudoku Solver

A simple Sudoku solver written in C++ using a recursive backtracking algorithm.

## Usage

### Creating Files

Make sure to create the `sudoku.in` file in the same folder as the executable. `sudoku.out` is created automatically.

### Input

Place a Sudoku puzzle in `sudoku.in`. Use `0` or `X` for empty cells.

Example:

```text
X 9 X ┃ 3 X X ┃ 6 X X
1 2 X ┃ X 5 X ┃ 7 3 X
X 8 3 ┃ 6 X 4 ┃ X X 9
━━━━━━╋━━━━━━━╋━━━━━━
7 X X ┃ X 3 9 ┃ 8 5 1
X 5 4 ┃ 7 8 1 ┃ 9 X 6
X X X ┃ X 2 6 ┃ X X 3
━━━━━━╋━━━━━━━╋━━━━━━
X 3 1 ┃ 2 X X ┃ 5 X X
X X 8 ┃ X 9 X ┃ X 4 X
X 4 X ┃ X X 3 ┃ X X X
```

### Output

The solved Sudoku is written to `sudoku.out` along with the solving time and the number of checks:

```text
4 9 7 ┃ 3 1 2 ┃ 6 8 5 
1 2 6 ┃ 9 5 8 ┃ 7 3 4 
5 8 3 ┃ 6 7 4 ┃ 2 1 9 
━━━━━━╋━━━━━━━╋━━━━━━
7 6 2 ┃ 4 3 9 ┃ 8 5 1 
3 5 4 ┃ 7 8 1 ┃ 9 2 6 
8 1 9 ┃ 5 2 6 ┃ 4 7 3 
━━━━━━╋━━━━━━━╋━━━━━━
9 3 1 ┃ 2 4 7 ┃ 5 6 8 
6 7 8 ┃ 1 9 5 ┃ 3 4 2 
2 4 5 ┃ 8 6 3 ┃ 1 9 7 

Solved in: 37 microseconds
Checks: 102
```

## Algorithm

The solver uses **backtracking**. It tries possible numbers for each empty cell and recursively continues until the puzzle is solved.
