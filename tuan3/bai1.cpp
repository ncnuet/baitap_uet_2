#include <iostream>

const int MAX_SIZE = 300;
using namespace std;

int main()
{
    int n, a[MAX_SIZE], tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (a[i] != tmp) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}