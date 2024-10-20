// Longest Common Subsequence
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
       int m = text1.length();
       int n = text2.length();

        // Creating table
        int c[m+1][n+1];
        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                c[i][j] = 0;
            }
        }

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if (text1[i-1] == text2[j-1]) {
                    c[i][j] = c[i-1][j-1] + 1;
                }
                else if (c[i-1][j] >= c[i][j-1]) {
                    c[i][j] = c[i-1][j];
                }
                else {
                    c[i][j] = c[i][j-1];
                }
            }
        }

        return c[m][n];
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string text1 = "abcde";
    string text2 = "ace";
    cout << "Test Case 1 Output: " << solution.longestCommonSubsequence(text1, text2) << endl;

    // Test Case 2
    text1 = "abc";
    text2 = "abc";
    cout << "Test Case 2 Output: " << solution.longestCommonSubsequence(text1, text2) << endl;

    // Test Case 3
    text1 = "abc";
    text2 = "def";
    cout << "Test Case 3 Output: " << solution.longestCommonSubsequence(text1, text2) << endl;

    return 0;
}
