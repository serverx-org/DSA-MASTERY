#include <iostream>
#include <vector>

using namespace std;

// Check if placing a queen at (row, col) is safe
bool isSafe(const vector<int>& rows, const vector<int>& cols, int row, int col) {
    for (int i = 0; i < rows.size(); ++i) {
        int r = rows[i];
        int c = cols[i];
        // Check if the same column or diagonal
        if (c == col || (r + c) == (row + col) || (r - c) == (row - col)) {
            return false;
        }
    }
    return true;
}

// Recursive function to solve the N-Queens problem
void solveNQueens(vector<int>& rows, vector<int>& cols, int n, int row) {
    if (row == n) {
        // Print the solution
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (cols[i] == j) {
                    cout << "Q ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int col = 0; col < n; ++col) {
        if (isSafe(rows, cols, row, col)) {
            rows.push_back(row);
            cols.push_back(col);
            solveNQueens(rows, cols, n, row + 1);
            rows.pop_back();
            cols.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> rows;
    vector<int> cols;

    solveNQueens(rows, cols, n, 0);

    return 0;
}
