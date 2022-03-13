#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000;

int main()
{
    int a[MAX], b[MAX], n;
    cin >> n;

    // Initialize a
    for (int i = 0; i < MAX; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        int tmp;
        cin >> tmp;
        b[tmp]++;
    }

    for (int i = 0; i < MAX; i++)
    {
        if (b[i] != 0 && a[i] != b[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
