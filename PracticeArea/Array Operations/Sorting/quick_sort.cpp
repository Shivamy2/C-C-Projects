#include <bits/stdc++.h>
using namespace std;

int partitionIndex(int arr[], int l, int n) {
    int i = l, piv = arr[l];
    int j = n - 1;
    while (j <= i)
    {
        if (arr[j] <= arr[i])
        {
            swap(arr[j], arr[i]);
            i++;
        }
        else
            j--;
    }
    if (piv > arr[i])
        swap(piv, arr[i]);
    return i;
}
void quickSort(int arr[], int l, int n)
{
    // if (n == 1)
    //     cout << arr[n];
    if(l < n)
    {
        int pI = partitionIndex(arr, l, n);
        quickSort(arr, 0, pI-1);
        quickSort(arr, pI + 1, n);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}