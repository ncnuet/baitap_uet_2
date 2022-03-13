#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long long to5(long long n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')
            s[i] = '5';
    }
    return stoi(s);
}

long long to6(long long n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '5')
            s[i] = '6';
    }
    return stoi(s);
}

int main()
{
    long long a[100], b[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
        cout << to5(a[i]) + to5(b[i]) << " " << to6(a[i]) + to6(b[i]) << endl;
}