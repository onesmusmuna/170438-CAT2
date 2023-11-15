#include <iostream>

using namespace std;

int main()
{
    int limit, num;

    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 0; i <= limit; i++)
    {

        if (num == 0)
        {
            continue;
        }

        if (num == 1)
        {
            continue;
        }

        if (num % 2)
        {
            continue;
        }

        if (num % 3)
        {
            continue;
        }

        cout << i;
    }
}