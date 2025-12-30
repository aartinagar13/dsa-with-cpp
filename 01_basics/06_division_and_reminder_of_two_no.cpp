//Division & remainder of two numbers
#include<iostream>
using namespace std;

int main(){
    int a,b, divide=0, rem=0;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    divide= a/b;
    rem= a%b;
    cout<<"Division of "<<a<<" and "<<b<<" is:"<<divide<<endl;
    cout<<"Remainder of "<<a<<" and "<<b<<" is:"<<rem<<endl;
    return 0;

}