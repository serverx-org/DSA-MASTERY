// Suduko Solver
#include <iostream>
#include <vector>

#define N 9

// Function to print the Sudoku board
void printBoard(const std::vector<std::vector<int>>& board) {
    for (const auto& row : board) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

// Function to check if placing num in board[row][col] is valid
bool isSafe(const std::vector<std::vector<int>>& board, int row, int col, int num) {
    // Check the row and column
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num) {
            return false;
        }
    }
    // Check the 3x3 sub-grid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }
    return true;
}

// Backtracking function to solve Sudoku
bool solveSudoku(std::vector<std::vector<int>>& board) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            // Find an empty cell
            if (board[row][col] == 0) {
                // Try numbers from 1 to 9
                for (int num = 1; num <= N; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num; // Place the number
                        // Recursively try to solve the rest of the board
                        if (solveSudoku(board)) {
                            return true;
                        }
                        // If it didn't work out, reset and try again
                        board[row][col] = 0;
                    }
                }
                return false; // No number can be placed, backtrack
            }
        }
    }
    return true; // Solved!
}

int main() {
    // Example Sudoku puzzle (0 represents empty cells)
    std::vector<std::vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0 ,7 ,9}
    };
    if (solveSudoku(board)) {
        std::cout << "Solved Sudoku:\n";
        printBoard(board);
    } else {
        std::cout << "No solution exists.\n";
    }
    return 0;
}
