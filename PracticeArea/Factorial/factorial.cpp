#include <iostream>
#include <conio.h>

using namespace std;
int fact(int n)
{
    int i = n, f = 1;
    while (i > 1)
    {
        f *= i;
        i--;
    }
    return f;
}
int binaryCoefficient(int n, int r)
{
    int result;
    int resN = fact(n);
    int resNR = fact(n - r);
    int resR = fact(r);
    result = resN / (resNR * resR);
    return result;
}
void pascalTriangle(int number)
{
    int i = 0;
    while (i < number)
    {
        for (int j = 0; j < number-i; j++)
        {
            cout<< "  ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout << binaryCoefficient(i, j) << "   ";
        }
        i++;
        cout << endl;
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int number, coefficient, rItems;
    // cin>> number>> rItems;
    cin >> number;
    pascalTriangle(number);
    return 0;
}