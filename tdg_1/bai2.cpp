#include <iostream>
#include <string>

using namespace std;

string convertDecimalToBinary(int number)
{
    string binary = "";
    while (number > 0)
    {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
    return binary;
}

int main()
{
    cout << convertDecimalToBinary(118);
}