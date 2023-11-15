#include <iostream>

using namespace std;

int isPrime(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }

    if (n % 3 == 0)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int limit, num;

    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 0; i <= limit; i++)
    {

        num = isPrime(i);

        if (num == 0)
        {
        }
    }
}