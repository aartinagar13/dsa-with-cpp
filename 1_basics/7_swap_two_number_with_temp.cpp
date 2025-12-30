//Swap two numbers (using temp)

#include<iostream>
using namespace std;

int main(){
    int a, b,temp;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before swapping a :"<<a<<" and b: "<<b<<endl;
    temp = a;
    a=b;
    b=temp;
    cout<<"After swapping a :"<<a<<" and b: "<<b<<endl;
    return 0;
}