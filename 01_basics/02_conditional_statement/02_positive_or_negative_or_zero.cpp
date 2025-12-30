//Check if a number is positive, negative, or zero
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num < 0)
        cout<<num<<" is a negative number.";
    else if(num >0)
        cout<<num<<" is a positive number.";    
    else    
       cout<<num<<" is a zero.";
    return 0;
}