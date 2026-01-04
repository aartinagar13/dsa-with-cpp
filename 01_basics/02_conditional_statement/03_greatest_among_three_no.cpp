//Find the largest of three numbers

#include<iostream>
using namespace std;

int main(){
    int a, b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    if(a>b)
       cout<<a<< " is the largest number.";
    else if(b>c)
       cout<<b<< " is the largest number.";
    else
       cout<<c<< " is the largest number.";
    return 0;
}
