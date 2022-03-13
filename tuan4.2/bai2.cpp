#include <iostream>
#include <vector>

using namespace std;

int equalizeArray(vector<int> arr)
{
    const int MAX = 200;
    int a[MAX];
    int max = 0;

    // initial data
    for (int i = 0; i < MAX; i++)
        a[i] = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (++a[arr[i]] > max)
        {
            max = a[arr[i]];
        }
    }
    return arr.size() - max;
}

int main()
{
    vector<int> a{1, 1, 2, 2, 2};
    cout << equalizeArray(a) << endl;
}