//Print Fibonacci series up to N terms
#include<iostream>
using namespace std;

int main(){
    int i,num,a=0,b=1,next;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Fabonacci series upto"<<num<<" terms is:"<<endl;
    for(i =1;i<=num;i++){
        cout<<a<<" ";
        next = a + b;
        a = b;
        b = next;
    
    }
}
