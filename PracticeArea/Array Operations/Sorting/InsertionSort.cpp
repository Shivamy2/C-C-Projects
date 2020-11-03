#include <bits/stdc++.h>
using namespace std;

int *InsertionSort(int arr[], int n) {
    int i = 1, value;
    while (i < n)
    {
        value = a[i];
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] < value)
            {
                
            }
            
        }
        
    }
    return arr;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int* p;
    p = InsertionSort(arr, n+1);
    for(int i = 0; i <= n; i++) cout<<*(p+i)<<" ";
    return 0;
}