// ADM: 170438
// Course: DBIT SEP DEC
// Strathmore university

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    // Prompt user to input num 1 and assign it to num1
    cout << "Please enter first number" << endl;
    cin >> num1;

    // Prompt user to input num 2 assign it to num2
    cout << "Please enter second number" << endl;
    cin >> num2;

    // Prompt user to input num 3 assign it to num3
    cout << "Please enter third number" << endl;
    cin >> num3;

    // Since the condition is a boolean (True or false)
    // The first switch statement should check for the first number only
    switch (num1 < num2)
    {

    case 1:
        // show first number is smallest
        cout << "First number is the smallest number" << endl;
        return 0;
        break;

        // case 2:
        //     cout << "First number is the maximum number" << endl;
        //     break;
    }

    // The second switch statement should check for the second and third numbers only.
    switch (num2 < num3)
    {
    case 1:
        // show second number is smallest
        cout << "Second number is the smallest number" << endl;
        break;

    case 0:

        cout << "Third number is the smallest number" << endl;
        break;
    }
}