#include <iostream>
#include <math.h>
using namespace std;
// int reversing(int n);
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int /* i = 0, */ sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum * 10 + rem;
        // sum += rem * pow(10,i);
        n /= 10;
        // i++;
    }
    cout<< sum;
    return 0;
}