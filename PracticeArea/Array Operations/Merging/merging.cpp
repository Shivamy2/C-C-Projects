
//TC = O(n+m)

#include <bits/stdc++.h>
using namespace std;

int *Merging(int arr1[], int arr2[], int arr3[], int n, int m) {
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m)
    {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i++];
        } else {
            arr3[k] = arr2[j++];
        }
        k++;
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
    return arr3;
    
}

int main() {
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    int arr3[n+m];
    for (int i = 0; i < n; i++)
        cin>>arr1[i];
    for(int i = 0; i < m; i++)
        cin>>arr2[i];
    int* p;
    p = Merging(arr1, arr2,arr3, n, m);
    for(int i = 0; i < n+m; i++) cout<<*(p+i)<<" ";
    return 0;
}