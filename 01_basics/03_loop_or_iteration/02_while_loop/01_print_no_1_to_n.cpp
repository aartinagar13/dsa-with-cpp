// Print numbers 1 to N
#include <iostream>
using namespace std;

int main()
{
    int i=1, num;
    cout << "Enter a number: ";
    cin >> num;

    //  Print numbers from 1 to num
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
}
