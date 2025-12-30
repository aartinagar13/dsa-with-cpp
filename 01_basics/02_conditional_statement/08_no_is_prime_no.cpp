//Check if a number is prime (simple method)

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //number must be above 1 to be prime
    if (num <= 1) {
        cout << num << " is not a prime number.";
        return 0;
    }

    //check for factors from 2 to num-1
    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number.";
            return 0;
        }
    } 

    // If no factors were found, it's prime
    cout << num << " is a prime number.";
    return 0;
}


