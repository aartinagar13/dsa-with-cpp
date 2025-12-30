//Factorial of a number
#include<iostream>
using namespace std;

int main(){
    int i,n , fact=1;
    cout<<"Enter a number:";
    cin>>n;

    //Check if n is negative 
    if (n <0) 
        cout << "Factorial is not defined for negative numbers.";
    
    //Calculate factorial of n
    for(i=1;i<=n;i++)
         fact=fact*i;
    
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;     
}