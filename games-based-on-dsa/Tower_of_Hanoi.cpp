//Tower of hanoi
#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char target, char auxiliary) {
    // Base case: only one disk to move
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary, using target as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, target);
    // Move the nth disk from source to target
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    // Move the n-1 disks from auxiliary to target, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    // Solve the Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B'); // A = source, C = target, B = auxiliary
    return 0;
}
