//ASCII value of a character

#include<iostream>
using namespace std;

int main() {
    char ch;
    int ascii_value;
    cout<<"Enter a character: ";
    cin>>ch;
    ascii_value= int(ch);
    cout<<"ASCII value of "<<ch<<" is:"<<ascii_value<<endl;
    return 0;
}