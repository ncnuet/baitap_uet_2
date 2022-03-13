#include <iostream>
using namespace std;

void printArrow(int n, bool left)
{
    for (int i = 0; i < n; i++)
    {
        int k = !left ? 2 * i : n - i - 1;
        for (int j = 0; j < k; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int k = !left ? 2 * i : n - i - 1;
        for (int j = 0; j < k; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int n, left;
    cin >> n >> left;
    printArrow(n, left);
}