#include <iostream>

using namespace std;

bool compareArray(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    cout << boolalpha << compareArray(a, b, 5);
}