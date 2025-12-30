//Print numbers N to 1

#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    
    //  Print numbers from n to 1
    for(i=n;i>=1; i--)
       cout<<i<<endl;
    return 0;   
}