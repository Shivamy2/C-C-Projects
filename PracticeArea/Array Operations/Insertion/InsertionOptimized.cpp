/* DOUBTFUL
QUESTION AND ALGORIGTHM
Please go for Another One */
#include <bits/stdc++.h>
using namespace std;
int Insertion(int arr[], int n, int ele) {
    int s = 0, e = n, m;
    while (e >= s)
    {
        m = (s + e) / 2;
        if (s == e)
        {
            return s+1;
        } else if (ele > arr[m])
        {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return s+1;
}
int main() {
    int n, ele;
    cin>>n>>ele;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int pos = Insertion(arr, n+1, ele);
    cout<<pos;
    // int i = n;
    // for(int i = 0; i < n+1; i++) {
    //     arr[pos] = ele;
    // }
    // arr[i + 1] = ele;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}