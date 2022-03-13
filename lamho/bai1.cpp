#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n < 100);

    for (int i = 1; i < n; i++)
    {
        if (i == pow((long long)sqrt(i), 2))
        {
            cout << i << " ";
        }
    }
}