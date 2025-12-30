//Print multiplication table of a number
#include<iostream>
using namespace std;

int main(){
    int i,n , fact=1;
    cout<<"Enter a number:";
    cin>>n;
    //  Print multiplication table of n
    for(i=1;i<=10;i++)
         cout<<n<<" x "<<i<<" = "<< n*i<<endl;
    return 0;     

}