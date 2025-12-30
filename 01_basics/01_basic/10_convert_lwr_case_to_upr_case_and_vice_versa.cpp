//Convert lowercase to uppercase & vice versa

#include<iostream>
using namespace std;

int main(){
    char a,b, caps, lwr;
    cout<<"Enter a lowercase character:";
    cin>>a;
    cout<<"Enter a upppercase character:";
    cin>>b;
    lwr= tolower(a);
    caps= toupper(b);
    cout<<"Lowercase character is: "<<lwr<<endl;
    cout<<"Uppercase character is: "<<caps<<endl;
    return 0;
}