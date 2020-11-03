#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    string values;
    cin >> t;
    vector<string> v;
    while (t--)
    { 
        cin >> values;
        v.push_back(values);
    }
        vector<string> :: iterator it;
        for(it = v.begin(); it < v.end(); it++) {
            reverse(begin(*it), end(*it));
            cout << *it << endl;
        }
    return 0;
}