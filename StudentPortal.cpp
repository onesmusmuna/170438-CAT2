#include <iostream>

using namespace std;

int main()
{
    // Declare and assign variables;
    int option;
    string username, password;
    string usr = "onesmus";
    string pass = "asdf";

    // Prompt user for details
    cout << "Enter username: ";
    getline(cin, username);

    cout << "Enter password: ";
    getline(cin, password);

    if (username != usr)
    {
        cout << "Wrong Credentials";
        return 0;
    }

    if (password != pass)
    {
        cout << "Wrong Credentials";
        return 0;
    }

    cout << "Login successful. Welcome to my Simple App. Select an action to perform";

    cout << "\n1. Go to about us \n2.Go to services \n3. Go to full Profile Page \n4. Logout" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Hello there. I like programming. things like web dev and mobile dev";
        break;

    case 2:
        cout << "Here are our services \nWe create websites \nWe create mobile applications \nWe also do online marketing";
        break;
    case 3:
        cout << "Name: Onesmus \nBirth: 1999 \ncountry: Kenya \ncitizenship: Kenyan \ncity: Nairobi \nUniversity: Strathmore \nCourse: BDIT \nhobbies: Playin piano, watching series";
        break;
    case 4:
        cout << "Logout successfull";
        break;
    }
}