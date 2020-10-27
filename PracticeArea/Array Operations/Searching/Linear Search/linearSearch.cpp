#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int k) {
    int i = 0;
    while (i < n)
    {
        if(arr[i] == k) return i+1;
        i++;
    }
    return -1;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int result = linearSearch(arr, n, k);
    result == -1? cout<<"Element not found"<<endl : cout<<result<<endl;
    return 0;
}