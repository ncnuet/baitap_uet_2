#include <iostream>
using namespace std;

int computeGcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int sumRelativePrime(int n)
{+++++
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        if (computeGcd(i, n) == 1)
            sum += i;
    return sum;
}

int main()
{
    cout << sumRelativePrime(30);
}