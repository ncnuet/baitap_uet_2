#include <iostream>

using namespace std;

long lTurn(long totalPages, long pageFind)
{
    return (pageFind - (pageFind % 2)) / 2;
}

long rTurn(long totalPages, long pageFind)
{
    return (totalPages + (1 - totalPages % 2) - pageFind) / 2;
}

long solve(long totalPages, long pageFind)
{
    long firstAnswer = lTurn(totalPages, pageFind);
    long secondAnswer = rTurn(totalPages, pageFind);
    return (firstAnswer > secondAnswer) ? secondAnswer : firstAnswer;
}

int main()
{
    int test = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        long totalPages, pageFind;
        cin >> totalPages >> pageFind;
        cout << solve(totalPages, pageFind) << endl;
    }
}