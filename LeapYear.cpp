// ADM: 170438
// Course: DBIT SEP DEC
// Strathmore university

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int year, mode;

    // prompt user to enter the year
    cout << "Enter the year: ";
    cin >> year;

    mode = year % 4;

    if (mode == 0)
    {
        cout << "Year is a Leap year";
    }
    else
    {
        cout << "Year is NOT Leap year";
    }
}