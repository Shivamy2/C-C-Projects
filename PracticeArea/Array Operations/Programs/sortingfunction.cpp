// Time Complexity here is: O(nlogn) and Space Complexity is: O(1)
#include <bits/stdc++.h>
using namespace std;
/* int main() {
	//code
     #ifndef ONLINE_JUDGE                                                       
         freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);                                    
     #endif 
	int t, n, values;
	vector<int> v;
	while(t--) {
	    cin >> n;
	    for(int i = 0; i < n; i++){
	        cin >> values;
	        v.push_back(values);
	    }
	    sort(v.begin(), v.end());
	   // vector<int> :: iterator it;
	    for(int it = 0; it < v.size(); it++) cout << v[it] << " ";
	    v.clear();
	    cout << endl;
	}
	return 0;
} */

// Time complexity here is : O(n) with space complexity: O(1)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int l = 0, m = 0, h = n - 1;
        int arr[n];
        int i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        
        while (m <= h)
        {
            switch (arr[m])
            {
            case 0:
                swap(arr[l], arr[m]);
                l++;
                m++;
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(arr[h], arr[m]);
                h--;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Time Complexity of O(n) with Space Complexity of O(1) with 2 iterations
/* int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            switch (arr[i])
            {
            case 0:
                c1++;
                break;
            case 1:
                c2++;
                break;
            case 2:
                c3++;
                break;
            }
        }
        int i;
        for (i = 0; c1 > 0; i++)
        {
            arr[i] = 0;
            c1--;
        }
        for (; c2 > 0; i++)
        {
            arr[i] = 1;
            c2--;
        }
        for (; c3 > 0; i++)
        {
            arr[i] = 2;
            c3--;
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
} */