#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int low, int high)
{
    // pivot
    int pivot = arr[high];
    // Index of smaller element and
    // indicates the right position
    // of pivot found so far
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller
        // than the pivot
        if (arr[j] < pivot)
        {
            // Increment index of
            // smaller element
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}
// Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int arr[1000], n, T, i;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        quickSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<endl;
        }
    }
    return 0;
}

//Explaination
// Input: 
// N = 5 
// arr[] = { 4, 1, 3, 9, 7}
// Output:
// 1 3 4 7 9