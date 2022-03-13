#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAX = 1000;

int maxW = 0, maxH = 0;
int row[MAX][MAX];
int flag[MAX][MAX];

struct Coordinate
{
    int x;
    int y;
};

bool isMovable(int step, Coordinate curIndex, char stepTurn)
{
    if (step == maxH - 1)
        return true;

    if (flag[curIndex.y][curIndex.x] != 2)
        return (flag[curIndex.y][curIndex.x] == 1);

    if (stepTurn == 'L')
    {
        if (curIndex.x - 1 >= 0 && row[curIndex.y][curIndex.x - 1] == 'E' && row[curIndex.y + 1][curIndex.x - 1] == 'E')
        {
            Coordinate nextIndex = {curIndex.x - 1, curIndex.y + 1};
            flag[nextIndex.y][nextIndex.x] = (isMovable(step + 1, nextIndex, 'L') || isMovable(step + 1, nextIndex, 'S') || isMovable(step + 1, nextIndex, 'R')) ? 1 : 0;
            return (flag[nextIndex.y][nextIndex.x] == 1);
        }
        else
            return false;
    }
    else if (stepTurn == 'R')
    {
        if (curIndex.x + 1 <= maxW - 1 && row[curIndex.y][curIndex.x + 1] == 'E' && row[curIndex.y + 1][curIndex.x + 1] == 'E')
        {
            Coordinate nextIndex = {curIndex.x + 1, curIndex.y + 1};
            flag[nextIndex.y][nextIndex.x] = (isMovable(step + 1, nextIndex, 'L') || isMovable(step + 1, nextIndex, 'S') || isMovable(step + 1, nextIndex, 'R')) ? 1 : 0;
            return (flag[nextIndex.y][nextIndex.x] == 1);
        }
        else
            return false;
    }
    else
    {
        if (row[curIndex.y + 1][curIndex.x] == 'E')
        {
            Coordinate nextIndex = {curIndex.x, curIndex.y + 1};
            flag[nextIndex.y][nextIndex.x] = (isMovable(step + 1, nextIndex, 'L') || isMovable(step + 1, nextIndex, 'S') || isMovable(step + 1, nextIndex, 'R')) ? 1 : 0;
            return (flag[nextIndex.y][nextIndex.x] == 1);
        }
        else
            return false;
    }
}

int main()
{
    Coordinate curIndex = {0, 0};
    cin >> maxW >> maxH;

    for (int i = 0; i < maxH; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < maxW; j++)
        {
            row[i][j] = s[j];
            flag[i][j] = 2;

            if (row[i][j] == 'Y')
            {
                curIndex.x = j;
                curIndex.y = i;
            }
        }
    }

    cout << ((isMovable(0, curIndex, 'L') || isMovable(0, curIndex, 'S') || isMovable(0, curIndex, 'R')) ? "YES" : "NO") << endl;

    // for (int i = 0; i < maxH; i++)
    // {
    //     for (int j = 0; j < maxW; j++)
    //         cout << flag[i][j] << " ";
    //     cout << endl;
    // }

    return 0;
}
