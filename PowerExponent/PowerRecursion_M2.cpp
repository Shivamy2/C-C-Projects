#include <iostream>
#include <conio.h>
#include <time.h>
/* Program to claculate power using recursion 
  We will use :
  for base to be  X { if x is odd -> (X^n) * (X^(n-1))
                    if x is even -> (X^n/2 * X^n/2) 
                    }
                    Here time complexity will be O(logn)
 */
using namespace std;
int Result;
int PowerRecusrsion_M2(int pow, int var) {
    if (pow == 0)
    {
        return 1;
    }
    else if (pow % 2 == 0)
    {
        Result = PowerRecusrsion_M2(pow-1,var);
        return Result * Result;
    }
    else
    {
        return (var * PowerRecusrsion_M2(pow-1, var));
    }
    
} 

int main() {
    time_t s,e;
    time(&s);

    int p = 90, v = 9;
    cout<<PowerRecusrsion_M2(p, v);

     time(&e);
    double timeTaken = double(e - s);
    cout<<"\nTime Taken Is: " <<fixed <<timeTaken <<"sec" <<endl;
    return 0;
}