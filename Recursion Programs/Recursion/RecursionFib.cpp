/* Program to print last element of fibonicci series using recursion 
    OUTPUT: 0 1 1 2 3 5... for n = 5 -> 5
    time complexity increases exponentially
    Method 1: Bad algorithm( not preferred)
 */
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

long RecursionFib(int n) {
    if (n <= 1)
    {
        return n;
    }
    return RecursionFib(n-1) + RecursionFib(n-2);
    }
int main() {
    int n = 60;
    time_t start, end;
    time(&start);
    cout<<RecursionFib(n);
    time(&end);

    double timeTaken = double(end - start);
    cout<<endl<< "Time Taken is "<< fixed << timeTaken;
    cout<< "sec" << endl;
    return 0;
}