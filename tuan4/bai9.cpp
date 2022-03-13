#include <iostream>
using namespace std;

void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void sort(float array[], int size, bool isAscending)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (isAscending)
            {
                if (array[i] > array[j])
                    swap(array[i], array[j]);
            }
            else
            {
                if (array[i] < array[j])
                    swap(array[i], array[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    float array[1000];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    bool isAscending = false;
    sort(array, n, isAscending);
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}