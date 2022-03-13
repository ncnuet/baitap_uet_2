#include <iostream>
#include <iomanip>

using namespace std;
const int MAX_SIZE = 300;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int n;
    int a[MAX_SIZE];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i - 1])
            cout << a[i] << " ";
    }
}