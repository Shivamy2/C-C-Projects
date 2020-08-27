/* Program to print the power of a number
    OUTPUT: 3^2 = 9
    Through iteration method
 */
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
int main() {
    time_t s,e;
    time(&s);
    int pow, value, n = 1 ;
    cout<< "Enter the value of power and number: ";
    cin>>pow >>value;
    for (int i = 0; i < pow; i++)
    {
        n = n * value;
    }
    cout<<"Power of "<<value <<"^" <<pow <<" = " << n;
    time(&e);

    double timeTaken = double(e - s);
    cout<<"Time Taken Is: " <<fixed <<timeTaken <<"sec" <<endl;
    return 0;
}