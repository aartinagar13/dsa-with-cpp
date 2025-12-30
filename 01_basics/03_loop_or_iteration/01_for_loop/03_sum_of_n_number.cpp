//Sum of first N numbers

#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0;
    cout<<"Enter a number:";
    cin>>n;

    // Calculate sum of first n numbers
    for(i=1;i<=n;i++)
        sum=sum+i;
    cout<<"Sum of first "<<n<<" numbers is:" <<sum<<endl;
    return 0;

}