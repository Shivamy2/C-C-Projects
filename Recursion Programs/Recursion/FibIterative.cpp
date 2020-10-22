/* Program to print last element of fibonicci series using iteration
    OUTPUT: 0 1 1 2 3 5....for n = 5 -> 5
    time complexity is O(n)
    Optimised
 */
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
int main() {
    int a = 0, b = 1, n = 20, c;
    time_t start, end;
    time(&start);
    for (int i = 0; i < n-1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout<<c;
    time(&end);

    double timeTaken = double(end - start);
    cout<<endl<<"time taken is " << fixed << timeTaken;
    cout<< "sec" << endl;
    
    return 0;
}