#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
    #ifndef ONLINE_JUDGE                                                       
         freopen("D:/Projects/C(C++) Zone/PracticeArea/Array Operations/input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);                                    
     #endif 
	int t, n, values, k;
	vector<int> v;
	vector<int> v2;
	cin >> t;
	while(t--) {
	    cin >> n;
	    for(int i = 0; i < n; i++) {
	        cin >> values;
	        v.push_back(values);
	    }
	    cin >> k;
	    for(int i = 0; i < k; i++) {
	        auto minn = *min_element(v.begin(), v.end());
            if(i == k-1)
                cout << minn << endl;
	        v.erase(remove(v.begin(), v.end(), minn));
	    }
    }
	return 0;
}