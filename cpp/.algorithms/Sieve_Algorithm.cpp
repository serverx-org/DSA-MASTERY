#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;
    // Initialize all values to 1 (assuming all numbers are prime initially)
    vector<int> prime(n + 1, 1); 
    // 0 and 1 are not prime numbers
    prime[0] = prime[1] = 0; 
    // Sieve of Eratosthenes algorithm
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    // Print all prime numbers
    for (int i = 0; i <= n; i++) {
        if (prime[i] == 1) {
            cout << i << " ";
        }
    }
    return 0;
}
