#include <bits/stdc++.h>
using namespace std;

int minHeight(int arr[], int n, int k) {
    int c1, c2, diff;
    int cornerDiff = arr[n-1] - arr[0];
    if(cornerDiff < k) {
        c1 = arr[0] - k;
        c2 = arr[n-1] - k;
    } else {
        c1 = arr[0] + k;
        c2 = arr[n-1] - k;
    }
    diff = c2 - c1;
    return diff;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << minHeight(arr, n, k);
    return 0;
}