#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin);
        freopen("D:/Projects/C(C++) Zone/PracticeArea/output.txt", "w", stdout);
    #endif
    int n, i = 0;
    cin>>n;
    int *arr = new int[n];
    while (cin>>arr[i++]);
    for (int i = n-1; i >= 0; i--)
    {
        cout<<arr[i] << " ";
    }
    
    delete[] arr;
    
    
    
return 0;
}