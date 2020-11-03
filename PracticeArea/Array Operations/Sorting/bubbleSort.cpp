#include <bits/stdc++.h>
using namespace std;

int *bubbleSort(int arr[], int n) {
    int i = 0;
    while (i < n-1)
    {
        int j;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] >  arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        i++;
    }
    return arr;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int* p;
    p = bubbleSort(arr, n);
    for(int i = 0; i < n; i++) cout<<*(p+i)<<" ";
    return 0;
}