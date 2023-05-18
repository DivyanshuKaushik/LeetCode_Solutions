#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int s, int e)
{
    // choose pivot
    int pivotIdx = s;

    // count > than pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[pivotIdx] > arr[i])
        {
            cnt++;
        }
    }

    // place pivot to correct position
    swap(arr[pivotIdx], arr[pivotIdx + cnt]);

    pivotIdx += cnt;

    int i = s, j = e;

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < arr[pivotIdx])
            i++;
        while (arr[j] > arr[pivotIdx])
            j++;
        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIdx;
}

void quickSort(int arr[], int s, int e)
{

    // base
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {26, 1, 4, 34, 8};
    quickSort(arr, 0, 4);
    for (auto x : arr)
        cout << x << " ";

    return 0;
}