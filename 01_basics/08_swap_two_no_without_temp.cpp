//Swap two numbers (without temp)

#include<iostream>
using namespace std;

int main(){
    int a, b,temp;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before swapping a :"<<a<<" and b: "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping a :"<<a<<" and b: "<<b<<endl;
    return 0;
}

