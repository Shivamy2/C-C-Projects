#include <bits/stdc++.h>
using namespace std;

int *deletion(int arr[], int n, int ele) {
    int i;
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] == ele)
        {
            break;  
        }
    }
    for (int j = i; j < n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return arr;
    
}

int main() {
    int n, ele;
    cin>>n>>ele;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    // cout<<sizeof(arr)<<endl;
    int* p;
    p = deletion(arr, n, ele);
    int i;
    for (i = 0; i < n-1; i++)
    {
        cout<<*(p+i)<<" ";
    }
    // cout<<endl<<sizeof(*p);
    
    return 0;
}