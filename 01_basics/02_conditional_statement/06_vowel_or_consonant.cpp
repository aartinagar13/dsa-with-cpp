//Check if a character is a vowel or consonant
#include<iostream>
using namespace std;

int main(){
    char letter, lwr_letter;
    cout<<"Enter an alphabet:";
    cin>>letter;

    // Check if input is an alphabet
    if (!isalpha(letter)) {
        cout << letter << " is not an alphabet.";
        return 0;
    }

    // Convert to lowercase to handle uppercase input
    lwr_letter = tolower(letter);


    if( lwr_letter == 'a' || lwr_letter == 'e' || lwr_letter == 'i' || lwr_letter == 'o' || lwr_letter == 'u' )
        cout<<letter<<" is a vowel.";
    else     
        cout<<letter<<" is a consonant.";
}
