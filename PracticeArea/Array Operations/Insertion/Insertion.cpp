// Complexity O(n^2)
#include <bits/stdc++.h>
using namespace std;
int *Insertion(int arr[], int n, int ele)
{
    int l = 0, u = n;
    if (ele < arr[0])
    {
        for (int i = u; i > l; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = ele;
    }
    else
    {
        while (l < u - 1)
        {

            if (arr[l] < ele && arr[l + 1] > ele)
            {
                while (u > l)
                {
                    arr[u + 1] = arr[u];
                    u--;
                }
                arr[l + 1] = ele;
            }
            l++;
        }
    }
    return arr;
}

int main()
{
    int n, ele;
    cin >> n >> ele;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *p;
    p = Insertion(arr, n + 1, ele);
    for (int i = 0; i <= n; i++)
        cout << *(p + i) << " ";
    return 0;
}