#include <iostream>
#include <iomanip>

using namespace std;
const int MAX_SIZE = 300;

int main()
{
    int n;
    double a[MAX_SIZE];
    double number_add;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> number_add;

    int pos = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > number_add)
        {
            pos = i;
            break;
        }
    }

    for (int i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = number_add;

    for (int i = 0; i < n + 1; i++)
        cout << fixed << setprecision(2) << a[i] << " ";
}