#include <bits/stdc++.h>
using namespace std;

int *Insertion_at_point(int arr[], int n, int pos, int ele) {
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
        if (i == pos)
        {
            arr[pos-1] = ele;
        }
    }
    return arr;
}

int main() {
    int n, pos, ele;
    cin>>n>>ele>>pos;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int* p;
    p = Insertion_at_point(arr, n, pos, ele);
    for(int i = 0; i <= n; i++) cout<< *(p+i)<<" ";
    return 0;
};