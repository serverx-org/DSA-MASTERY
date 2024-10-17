#include <bits/stdc++.h>
using namespace std;

// Function to reverse every sub-array group of size k.
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int l = i;
        int h = min(i + k - 1, n - 1);
        while (l < h)
        {
            swap(arr[l++], arr[h--]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //if the constraints is too high i.e long long
        vector<long long> arr;
        int k;
        cin >> k;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        reverseInGroups(arr, n, k);
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


// Input: k = 3, arr= [1, 2, 3, 4, 5]
// Output: [3, 2, 1, 5, 4]
// Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.