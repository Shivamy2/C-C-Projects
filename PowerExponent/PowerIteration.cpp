#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    int pow, value, n = 1 ;
    cout<< "Enter the value of power and number: ";
    cin>>pow >>value;
    for (int i = 0; i < pow; i++)
    {
        n = n * value;
    }
    cout<<"Power of "<<pow <<"^" <<value <<" = " << n;
    
    return 0;
}