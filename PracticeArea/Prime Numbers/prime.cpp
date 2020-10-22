#include <iostream>
#include <math.h>
bool isPrimeN(int n);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);       
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    bool primeChecker = isPrimeN(n);
    if (primeChecker == true)
    {
        cout<< "Prime Number";
    }else if (primeChecker == false)
    {
        cout<<"Co-Prime Number";
    }
return 0;
}

bool isPrimeN(int n) {
    int flag = 0, i = 2;
    while (i <= sqrt(n))
    {
        if(n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}