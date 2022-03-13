#include <iostream>

using namespace std;
const int MAX_SIZE = 300;

int main()
{
    int n, a[MAX_SIZE];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - i - 1])
        {
            cout << "Asymmetric array.";
            return 0;
        }
    cout << "Symmetric array.";
}