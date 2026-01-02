//Reverse a number

#include <iostream>
using namespace std;

int main() {
    int num, rem, ans = 0;

    cout << "Enter a number: ";
    cin >> num;

    // for-loop version
    for (; num != 0; num = num / 10) {
        rem = num % 10;
        ans = ans * 10 + rem;
    }

    cout << "Reversed number: " << ans;
    return 0;
}
