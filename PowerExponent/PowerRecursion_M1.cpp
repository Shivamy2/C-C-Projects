#include <iostream>
#include <conio.h>
#include <time.h>
long PowerRecursion_M1(int pow, int var) {
    if (pow != 0)
    {
        return (var * PowerRecursion_M1(pow-1, var));   // it calculates like this 2^3 =
                                                        // (2 x 2^2) -> var * PowerRecursion_M1(pow-1, var)
    }
    else
    {
        return 1;   
    }
    
}
using namespace std;
int main() {
     time_t s,e;
    time(&s);

    int p = 90, v = 9;
    cout<<PowerRecursion_M1(p, v);
    time(&e);

    double timeTaken = double(e - s);
    cout<<"\nTime Taken Is: " <<fixed <<timeTaken <<"sec" <<endl;

    return 0;
}