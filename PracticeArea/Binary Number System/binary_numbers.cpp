#include <iostream>
#include <math.h>
long decimalToBinary(long n);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);       
        freopen("output.txt", "w", stdout);
    #endif
    long n;
    cin>>n;
    long binaryNumber = decimalToBinary(n);
    cout<< binaryNumber;
    return 0;
}

long decimalToBinary(long n) {
    long rem, i = 0, quotient, sum = 0;
    while (n != 0)
    {
        rem = n % 2;
        sum = sum + (rem * pow(10, i));
        n /= 2;
        i++;
    }
    return sum;
    
}
