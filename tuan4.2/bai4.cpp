#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int main()
{
    vector<vector<int> > storage;

    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int length = 0;
        cin >> length;
        for (int j = 0; j < length; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        storage.push_back(temp);
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << storage[x][y] << endl;
    }
    return 0;
}