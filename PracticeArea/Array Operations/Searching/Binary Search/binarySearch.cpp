#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int k) {
    int f = 0, l = n - 1, m;
    while(l >= f) {
        m = f + (l-f) / 2;
        if(arr[m] == k) {
            return 1;
        } if(arr[m] > k) {
            l = m - 1;
        } else {
            f = m + 1;
        }
    }
    return -1;
}
int main() {
    int t, n, k;
    int arr[n];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 0; i < n; i++) cin>>arr[i];
        cout<<binarySearch(arr, n, k)<<endl;
    }
	return 0;
}