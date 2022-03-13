#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int getGcd(int n, int m)
{
    int t;
    while (m != 0)
    {
        int t = m;
        m = n % m;
        n = t;
    }
    return n;
}

int getLcm(int n, int m)
{
    return n * m / getGcd(n, m);
}

int countSubmultiple(int a)
{
    int count = 0;
    for (int i = 1; i <= sqrt(a); i++)
        if (a % i == 0)
            count += 2;

    if (a == pow(trunc(sqrt(a)), 2))
        count--;

    return count;
}

int getTotalX(vector<int> a, vector<int> b)
{
    int lcm = a[0]; // lcm of a
    int gcd = b[0]; // gcd of b

    for (int i = 1; i < a.size(); i++)
        lcm = getLcm(lcm, a[i]);

    for (int i = 1; i < b.size(); i++)
        gcd = getGcd(gcd, b[i]);

    return (gcd % lcm == 0) ? countSubmultiple(gcd / lcm) : 0;
}

int main()
{
    vector<int> a{3, 9};
    vector<int> b{16, 32, 96};
    cout << getTotalX(a, b) << endl;
}