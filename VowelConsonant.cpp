#include <iostream>

using namespace std;

int main()
{

    // Declare variables
    char input, az, check;

    // prompt user for character
    cout << "Enter the character: ";
    cin >> input;

    // change to lowercase
    az = tolower(input);

    // check if its alpha
    check = isalpha(az);

    // IF not valid, return 0;
    if (!check)
    {
        cout << "Input not valid!";
        return 0;
    }

    switch (az)
    {
    case 'a':
        cout << "Is a vowel";
        break;
    case 'e':
        cout << "Is a vowel";
        break;

    case 'i':
        cout << "Is a vowel";
        break;

    case 'o':
        cout << "Is a vowel";
        break;

    case 'u':
        cout << "Is a vowel";
        break;

    default:
        cout << "Is a Consonant";
    }
}