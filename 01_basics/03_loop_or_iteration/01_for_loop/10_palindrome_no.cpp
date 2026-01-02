// Check if a number is palindrome

#include <iostream>
using namespace std;

int main()
{
    int num, rem, ans = 0, palindrome;

    cout << "Enter a number: ";
    cin >> num;
    palindrome = num;
    // for-loop version
    for (; num != 0; num = num / 10)
    {
        rem = num % 10;
        ans = ans * 10 + rem;
    }
    if (palindrome == ans)
      {
        cout << palindrome << " is a palindrome number." << endl;
        return 1;
      }
    else
      {
        cout << palindrome << " is not a palindrome number." << endl;
        return 1;
      }
    return 0;
}
