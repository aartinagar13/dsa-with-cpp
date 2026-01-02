//Count digits in a number
#include<iostream>
using namespace std;

int main(){
    int i,count=0,num;
    cout<<"Enter a number:";
    cin>>num;
    //Count digits in num
    for(i=num;i!=0;i=i/10){
        count++;
    }
    cout<<  "Number of digits in "<<num<<" is: "<<count<<endl;

}