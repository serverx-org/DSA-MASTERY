#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

const int RUN = 32;

void insertionSort(std::vector<int> &arr, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void merge(std::vector<int> &arr, int l, int m, int r)
{

    int len1 = m - l + 1, len2 = r - m;
    std::vector<int> left(len1), right(len2);

    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void timSort(std::vector<int> &arr, int n)
{

    for (int i = 0; i < n; i += RUN)
    {
        insertionSort(arr, i, std::min((i + RUN - 1), (n - 1)));
    }

    for (int size = RUN; size < n; size = 2 * size)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int mid = left + size - 1;
            int right = std::min((left + 2 * size - 1), (n - 1));

            if (mid < right)
                merge(arr, left, mid, right);
        }
    }
}

void printArray(const std::vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> arr = {5, 21, 7, 23, 19, 2, 6, 8, 9, 4, 3, 12, 1, 10, 15, 13, 14, 20, 18, 17, 16, 11, 22};
    int n = arr.size();

    std::cout << "Original array:\n";
    printArray(arr);

    timSort(arr, n);

    std::cout << "Sorted array:\n";
    printArray(arr);

    return 0;
}
