#include <iostream>
#include <math.h>
using namespace std;
// int armstrongN(int n);
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    int cube = round(pow(n,3));
    cout<< cube;
    // int on = n;
    /* int sum = 0;
    while (n)
    {
        int rem = n % 10;
        sum = sum + pow(rem, 3);
        n /= 10;
    }
    // int num = armstrongN(n);
    if (sum == on)
    {
        cout<<"Armstrong Number";
    }else
    {
        cout<<"Not Armstrong Number";
    }
     */

    return 0;
}