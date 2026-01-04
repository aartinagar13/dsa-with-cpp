//Grade calculation based on marks

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter an marks:";
    cin>>marks;

    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 80 && marks <= 89)
        cout << "Grade B";
    else if (marks >= 70 && marks <= 79)
       cout << "Grade C";
    else if (marks >= 60 && marks <= 69)
        cout << "Grade D";
    else if (marks >= 50 && marks <= 59)
        cout << "Grade E";
    else 
        cout << "Grade F";
    return 0;
}
