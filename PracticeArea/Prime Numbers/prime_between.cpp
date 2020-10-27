/*  #include<iostream>                                                          
 #include<math.h>                                                               
 using namespace std;                                                           
 bool isprime_func(int i) {                                                       
     for(int j = 2; j <= sqrt(i); j++)                                          
     {                                                                          
         if (i % j == 0)                                                        
         {                                                                      
             return false;                                                      
         }                                                                      
     }                                                                          
     return true;                                                               
 }                                                                              
 int main() {                                                                   
     #ifndef ONLINE_JUDGE                                                       
         freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);                                    
     #endif                                                                     
     int num1, num2;                                                            
     cin>> num1>> num2;                                                         
     for (int i = num1; i <= num1; i++)                                         
     {                                                                          
         if(isprime_func(i)) {                                                    
             cout<<i<<endl;                                                     
         }                                                                      
     }                                                                          
         cout<< "Success!!";                                                    
                                                                                
     return 0;                                                                  
 }  */                                                                             

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE                                                       
         freopen("D:/Projects/C(C++) Zone/PracticeArea/input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);                                    
     #endif      

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}