#include <bits/stdc++.h>
#include <math.h>
using namespace std;
string decimalToHexa(int n);
void binaryAddition(int n, int m);
int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);       
    //     freopen("output.txt", "w", stdout);
    // #endif
    int ns, ms;
    cin>> ns>> ms;
    // int binaryNumber = decimalToHexa(n);
    // cout<< decimalToHexa(n);
    /* for (int i = decimalToHexa(n).size(); i >= 0 ; i--)
    {
        cout<< decimalToHexa(n)[i];
    } */
    binaryAddition(ns, ms);
    // cout<< "Sucess";
    
    return 0;
}

void binaryAddition(int n, int m) {
    int i = 0, sum = 0, carry = 0;
    string res = "";
    while (n && m)
    {
        int remA = n % 10;
        int remB = m % 10;
        sum = remB + remA + carry;
        if (sum == 2)
        {
            sum = 0;
            carry = 1;
        } else if (sum == 3)
        {
            sum = 1;
            carry = 1;
        } else
        {
            sum = 0;
            carry = 0;
        }
        res = res + to_string(sum);
        // cout<< sum;
        n /= 10;
        m /=10;
        i++;
    }
    int len = res.size();
    string newRes = "";
    for (int i = len - 1; i >= 0; i--)
        newRes[i] = res[i];
    cout<< newRes;
    // cout<< res;
    // reverse(res);
}

string decimalToHexa(int n) {
    int rem, i = 0, a = 1;
    string res = "";
    while (n != 0)
    {
        rem = n % 16;
        // sum += rem*a;
        if (rem <= 9)
        {
            res = res + to_string(rem);
        } else
        {
            char c = 'A' + rem - 10;
            res.push_back(c);
        }
        // a *= 10;
        n /= 16;
        i++;
    }
    return res;
}
