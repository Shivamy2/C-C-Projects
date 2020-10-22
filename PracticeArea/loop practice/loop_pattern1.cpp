#include <iostream>
#include <conio.h>
using namespace std;
void loop_pattern1(int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< "* ";
        }
        cout<<endl;
        
    }

}
void loop_pattern2(int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 && j>=0 || i >= 0 && j == col-1 || i == row-1 && j >= 0 || i >= 0 && j == 0)
            {
                cout<<" *";
            }else
            {
                cout<< "  ";
            }   
        }   
            cout<<endl;
    }
}

void loop_pattern3(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout<< " ";
        }
        cout<<endl;
        
    }
    
}

void loop_pattern4(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<= n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
}
void loop_pattern5(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void loop_pattern6(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void loop_pattern7(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if (j <= i || j >= 2*n- (i+1))
            {
                cout<< "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;   
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 2*n; j > 0; j--)
        {
            if (j <= i || j > 2*n- (i))
            {
                cout<< "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;   
    }
}
    

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);       
        freopen("D:/Projects/C(C++) Zone/PracticeArea/output.txt", "w", stdout);
    #endif
    // int row, col;
    // cin>>row>>col;
    int n;
    cin>> n;
    // loop_pattern1(row, col);
    // loop_pattern2(row, col);
    // loop_pattern3(n);
    // loop_pattern4(n);
    // loop_pattern5(n);
    // loop_pattern6(n);
    loop_pattern7(n);
return 0;
}