#include <iostream>
#include <conio.h>

using namespace std;
void loop1(int n);
void loop2(int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int row, col;
    // cin>>row>>col;
    int n;
    cin >> n;
    // loop1(n);
    loop2(n);
    return 0;
}

void display(int rows, char printing) {
    for (int i = 1; i <= rows; i++)
    {
        cout<<printing<<" ";
    }
    
}

void loop1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 2; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        if (i != 1)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 2 * i - 1; j > 2; j--)
        {
            cout << " ";
        }
        if (i != 1)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void loop2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // cout<<endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n-i+1; j >= 1; j--)
        {
            cout<<" ";
        }
        for (int j = i; j>= 1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}