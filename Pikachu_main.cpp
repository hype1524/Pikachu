#include <iostream>
#include <stdio.h>
#include <SDL.h>

using namespace std;

const int GAME_ROW = 11;
const int GAME_COLUMN = 18;

int main(int argc, char* argv[])
{
    int a[GAME_ROW][GAME_COLUMN];
    for(int i = 0; i < GAME_ROW; i++)
    {
        for(int j = 0; j < GAME_COLUMN; j++)
        {
            a[i][j] = 1;
        }
    }
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << find_way(a, x1, y1, x2, y2);
}
