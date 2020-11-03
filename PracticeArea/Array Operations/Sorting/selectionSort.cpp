#include <bits/stdc++.h>
using namespace std;

int *selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            int temp = arr[min];
            arr[min] = arr[j];
            arr[j] = temp;
        }
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *p;
    p = selectionSort(arr, n);
    for (int i = n-1; i >= 0; i--)
    {
        cout << *(p + i) << " ";
    }

    return 0;
}