#include <bits/stdc++.h>
using namespace std;

void closest012(int arr[], int n)
{
    int lo = 0, hi = n - 1, mid = 0;
    while (mid <= hi)
    {
        if (arr[mid] == 0)
        {
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[hi]);
            hi--;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        closest012(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}

// Given an array of 0s, 1s, and 2s. Arrange the array elements such that all 0s come first, followed by all the 1s and then, all the 2s.
// Input: N = 5, arr[] = {0, 2, 1, 2, 0}
// Output: 0 0 1 2 2