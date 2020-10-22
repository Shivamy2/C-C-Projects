#include <iostream>
#include <math.h>

using namespace std;
int power(int, int);
float power(float, int);
double power(double, int);
long power(long, int);

int power(int num, int power){
    int val = 1;
    for(int i = 0;i<power;i++){
        val*=num;
    }
    return val;
}
float power(float num, int power){
    float val = 1;
    for(int i = 0;i<power;i++){
        val*=num;
    }
    return val;
}
double power(double num, int power){
    double val = 1;
    for(int i = 0;i<power;i++){
        val*=num;
    }
    return val;
}
long power(long num, int power){
    long val = 1;
    for(int i = 0;i<power;i++){
        val*=num;
    }
    return val;
}


int main() {
    double num1;
    float num2;
    int num3;
    long num4;
    int pow;
    cout<<"Enter a double\n";
    cin>>num1;
    cout<<"Enter a power\n";
    cin>>pow;
    cout<<power(num1,pow)<<"\n";
    
    cout<<"Enter a float\n";
    cin>>num2;
    cout<<"Enter a power\n";
    cin>>pow;
    cout<<power(num2,pow)<<"\n";
    
    cout<<"Enter an Int\n";
    cin>>num3;
    cout<<"Enter a power\n";
    cin>>pow;
    cout<<power(num3,pow)<<"\n";
    
    cout<<"Enter a Long\n";
    cin>>num4;
    cout<<"Enter a power\n";
    cin>>pow;
    cout<<power(num4,pow)<<"\n";
    
    return 0;
}