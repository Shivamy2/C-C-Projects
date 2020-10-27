#include <iostream>
// #include <conio.h>

using namespace std;
void fib(int n)
{
    int i = 1, temp, a = 0, b = 1;
    if (n <= 2)
    {
        cout << "0 1 ";
    }
    else
    {
        cout<< "0 1 ";
        while (i <= n-2)
        {
            temp = a + b;
            cout<< temp << " ";
            a = b;
            b = temp;
            i++;
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE                                                       
         freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);                                    
    #endif
    int n;
    cin >> n;
    fib(n);

    return 0;
}