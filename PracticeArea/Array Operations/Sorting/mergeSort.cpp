#include <bits/stdc++.h>
using namespace std;

int *Merging(int arr[], int s, int m, int e)
{
    int i, j, k = 0, n1 = m - s + 1, n2 = e - s;
    int newArr1[n1], newArr2[n2];
    for (i = 0; i < n1; i++)
    {
        newArr1[i] = arr[i + s];
    }
    for (j = 0; j < n2; j++)
    {
        newArr2[i] = arr[m + j + 1];
    }
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (newArr1[i] < newArr2[j])
        {
            arr[k] = newArr1[i++];
        }
        else
        {
            arr[k] = newArr2[j++];
        }
        k++;
    }
    while (i < n1)
    {
        arr[k++] = newArr1[i++];
    }
    while (j < n2)
    {
        arr[k++] = newArr2[j++];
    }
    return arr;
}

int *mergeSort(int arr[], int s, int n)
{
    int e = n, m;
    int* p;
    if (s < e)
    {
        m = (s + e) / 2;
        mergeSort(arr, s, m);
        mergeSort(arr, m + 1, e);
        p = Merging(arr, s, m, e);
    }
    return p;
}

int main()
{
    int e;
    cin >> e;
    int arr[e];
    for (int i = 0; i < e; i++)
        cin >> arr[i];
    int* p = mergeSort(arr, 0, e);
    for (int i = 0; i < e; i++)
        cout << *(p + i) << " ";
    return 0;
}