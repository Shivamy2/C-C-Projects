// Time Coomplexity is O(n) with Space Complexity as O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, cPositive = 0, cNegative = 0;
    cin >> n;
    /* vector<int> v(n), vPositive, vNegative;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] >= 0)
            vPositive.push_back(v[i]);
        else if (v[i] < 0)
            vNegative.push_back(v[i]);
    }
    for (int i = 0; i < vNegative.size(); i++)
    {
        cout << vNegative[i] << " ";
    }
    for (int i = 0; i < vPositive.size(); i++)
    {
        cout << vPositive[i] << " ";
    } */
    int arr[n], low = 0, mid = 0, high = n - 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (mid <= high)
    {
        if (arr[mid] < 0)
        {
            swap(arr[mid++], arr[low++]);
        } else {
            swap(arr[mid], arr[high--]);
        }
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}