// Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

class Solver {
public:
    void calculateShortestDistance(vector<vector<int>>& m) {
        int size = m.size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (m[i][j] == -1) {
                    m[i][j] = 1e9;
                }
                if (i == j) m[i][j] = 0;
            }
        }

        for (int k = 0; k < size; k++) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
                }
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (m[i][j] == 1e9) {
                    m[i][j] = -1;
                }
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    cout << "Enter the matrix (use -1 for no direct path):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    Solver obj;
    obj.calculateShortestDistance(m);

    cout << "The shortest distances between each pair of vertices are:\n";
    for (auto& row : m) {
        for (auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
