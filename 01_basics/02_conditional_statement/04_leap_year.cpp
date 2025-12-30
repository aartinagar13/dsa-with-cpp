//Check if a year is a leap year
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    // A year is a leap year if it is divisible by 4 but not divisible by 100,
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      cout<<year<<" is a leap year.";
    else
      cout<<year<<" is not a leap year.";
      
    return 0;
}
