//Sum of even/odd numbers till N

#include<iostream>
using namespace std;

int main(){
    int i, num, sum_even=0, sum_odd=0;
    cout<<"Enter a number:";
    cin>>num;

    //  Calculate sum of even and odd numbers till num
    for(i=1;i<=num;i++){
        //  Check if i is even or odd
        if(i%2 == 0)
            sum_even=sum_even + i;
        else
           sum_odd=sum_odd + i;    
    }
    //  Print sum of even and odd numbers
    cout<<"Sum of even number till "<<num<<" is: "<<sum_even<<endl;
    cout<<"Sum of odd number till "<<num<<" is: "<<sum_odd<<endl;

}