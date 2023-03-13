struct coordinate
{
    int x;
    int y;
};

void change(int arr[][GAME_COLUMN])
{
    vector<coordinate> coor;
    vector<int> val;

    for(int i = 1; i < GAME_ROW - 1; i++)
    {
        for(int j = 1; j < GAME_COLUMN - 1; i++)
        {
            if(arr[i][j] != 0)
            {
                coor.push_back({i, j});
                val.push_back(arr[i][j]);
            }
        }
    }

    random_shuffle(val.begin(), val.end());

    int n = val.size();
    for(int i = 0; i < n; i++)
    {
        arr[coor[i].x][coor[i].y] = val[i];
    }
}

