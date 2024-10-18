// Tick-Tack-Toe
// This C++ program implements a Tick-Tack-Toe game where two players take turns to input their moves. 
// The game checks for wins or draws after each move and displays the current board state.
#include <iostream>
#include <vector>
#define SIZE 3

class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() {
        board.resize(SIZE, std::vector<char>(SIZE));
        initializeBoard();
        currentPlayer = 'X';
    }

    void initializeBoard() {
        int count = 1;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                board[i][j] = '0' + count++;
            }
        }
    }

    void printBoard() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                std::cout << " " << board[i][j] << " ";
                if (j < SIZE - 1) std::cout << "|";
            }
            std::cout << "\n";
            if (i < SIZE - 1) std::cout << "---|---|---\n";
        }
    }

    bool checkWin(char player) {
        for (int i = 0; i < SIZE; i++) {
            if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
                (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
                return true;
            }
        }
        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
            return true;
        }
        return false;
    }

    void playGame() {
        int moves = 0;

        while (true) {
            printBoard();
            std::cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            int move;
            std::cin >> move;

            int row = (move - 1) / SIZE;
            int col = (move - 1) % SIZE;

            if (move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
                std::cout << "Invalid move. Try again.\n";
                continue;
            }

            board[row][col] = currentPlayer;
            moves++;

            if (checkWin(currentPlayer)) {
                printBoard();
                std::cout << "Player " << currentPlayer << " wins!\n";
                break;
            }

            if (moves == SIZE * SIZE) {
                printBoard();
                std::cout << "It's a draw!\n";
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}
