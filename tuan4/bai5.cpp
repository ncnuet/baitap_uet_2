#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
    if (number < 1)
        return false;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number;
    cin >> number;
    if (isPrime(number))
    {
        cout << "Prime.";
    }
    else
    {
        cout << "Not a prime.";
    }
}