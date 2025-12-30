//Check if a number is even or odd
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    //  Check if number is even or odd
    if(num%2==0)
        cout<<num<<" is a even number.";
    else 
        cout<<num<<" is a odd number.";    
    return 0;
}