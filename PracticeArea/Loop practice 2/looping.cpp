#include <iostream>
#include <conio.h>

using namespace std;
void loop1(int n);
void loop2(int n);
void loop3(int n);
void loop4(int n);
void loop5(int n);
void loop6(int n);
void loop7(int n);
int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);       
        freopen("output.txt", "w", stdout);
    #endif
    // int row, col;
    // cin>>row>>col;
    int n;
    cin>> n;
    // loop1(n);
    // loop2(n);
    // loop3(n);
    // loop4(n);
    // loop5(n);
    // loop6(n);
    loop7(n);
return 0;
}

void loop1(int n) {
for (int i = n; i > 0; i--)
{
    int k = 1;
    for (int j = i; j >= 1; j--)
    {
        cout<< k<< " ";
        k++;
    }
    cout<<endl;
}
}

void loop2(int n) {
for (int i = 1; i <= n; i++)
{
    int k = 0;
    for (int j = 1; j <= i; j++)
    {
        if ((i + j) % 2 != 0)
        {
            cout<<"0 ";
        }else
        {
            cout<<"1 ";
        }
    }
    cout<<endl;
}
}

void loop3(int n) {
 for (int i = 1; i <= n; i++)
 {
    for (int j = 1; j <= 2*n; j++)
    {
        if (j >= 2*n-i+1 || j < n-i+1)
        {
            cout<< " ";            
        }else
        {
            cout<<"*";
        }
        
    }
        cout<< endl;
 }
}

void loop4(int n) {
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= 2*n; j++)
        {
            if ((i + j) % 2 == 0 && ((i + j) > n && (j - i) < n))
            {
                cout<<k;
                k++;
            }else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void loop5(int n) {
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k--;
        }
        int l = 2;
        for (int j = 1; j < i; j++)
        {
            cout<< l<<" ";
            l++;
        }
        
        cout<<endl;
    }
}
void loop6(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n-i; j >= 1; j--)
        {
            cout<<"  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout<<"* ";
        }
        for (int j = i; j > 1; j--)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
}

void loop7(int n) {
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) ||  ((j - i)%2 == 0) && (j - i) % 4 != 0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}