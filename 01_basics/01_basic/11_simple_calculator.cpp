//Simple calculator (add, subtract, multiply, divide)
#include<iostream>
using namespace std;

int main() {
    int a, b, sum=0;

    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
    cout<<"Difference of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
    cout<<"Multiply of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
    cout<<"Divide of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
    cout<<"Reminder of "<<a<<" and "<<b<<" is: "<<a%b<<endl;
    
    return 0;
}