bool check_x(int arr[][GAME_COLUMN], int xa, int ya, int xb, int yb)
{
    bool check = false;

    int minxa = xa;
    int maxxa = xa;
    int minxb = xb;
    int maxxb = xb;

    for(int i = xa - 1; i >= 0; i--)
    {
        if(arr[i][ya] != 0)
        {
            minxa = i + 1;
            break;
        }

        if(i == 0)
        {
            minxa = i;
        }
    }

    for(int i = xa + 1; i < GAME_ROW; i++)
    {
        if(arr[i][ya] != 0)
        {
            maxxa = i - 1;
            break;
        }

        if(i == GAME_ROW - 1)
        {
            maxxa = i;
        }
    }

    for(int i = xb - 1; i >= 0; i--)
    {
        if(arr[i][yb] != 0)
        {
            minxb = i + 1;
            break;
        }

        if(i == 0)
        {
            minxb = i;
        }
    }

    for(int i = xb + 1; i < GAME_ROW; i++)
    {
        if(arr[i][yb] != 0)
        {
            maxxb = i - 1;
            break;
        }

        if(i == GAME_ROW - 1)
        {
            maxxb = i;
        }
    }

    int minx = max(minxa, minxb);
    int maxx = min(maxxa, maxxb);

    if(minx <= maxx)
    {
        if(ya < yb)
        {
            for(int i = minx; i <= maxx; i++)
            {
                bool check1 = true;

                for(int j = ya + 1; j <= yb - 1; j++)
                {
                    if(arr[i][j] != 0)
                    {
                        check1 = false;
                        break;
                    }
                }

                if(check1)
                {
                    check = true;
                    break;
                }
            }
        }

        else if(ya > yb)
        {
            for(int i = minx; i <= maxx; i++)
            {
                bool check1 = true;

                for(int j = yb + 1; j <= ya - 1; j++)
                {
                    if(arr[i][j] != 0)
                    {
                        check1 = false;
                        break;
                    }
                }

                if(check1)
                {
                    check = true;
                    break;
                }
            }
        }

        else
        {
            check = true;
        }
    }

    return check;
}

bool check_y(int arr[][GAME_COLUMN], int xa, int ya, int xb, int yb)
{
    bool check = false;

    int minya = ya;
    int maxya = ya;
    int minyb = yb;
    int maxyb = yb;

    for(int i = ya - 1; i >= 0; i--)
    {
        if(arr[xa][i] != 0)
        {
            minya = i + 1;
            break;
        }

        if(i == 0)
        {
            minya = i;
        }
    }

    for(int i = ya + 1; i < GAME_COLUMN; i++)
    {
        if(arr[xa][i] != 0)
        {
            maxya = i - 1;
            break;
        }

        if(i == GAME_COLUMN - 1)
        {
            maxya = i;
        }
    }

    for(int i = yb - 1; i >= 0; i--)
    {
        if(arr[xb][i] != 0)
        {
            minyb = i + 1;
            break;
        }

        if(i == 0)
        {
            minyb = i;
        }
    }

    for(int i = yb + 1; i < GAME_COLUMN; i++)
    {
        if(arr[xb][i] != 0)
        {
            maxyb = i - 1;
            break;
        }

        if(i == GAME_COLUMN - 1)
        {
            maxyb = i;
        }
    }

    int miny = max(minya, minyb);
    int maxy = min(maxya, maxyb);

    if(miny <= maxy)
    {
        if(xa < xb)
        {
            for(int i = miny; i <= maxy; i++)
            {
                bool check1 = true;

                for(int j = xa + 1; j <= xb - 1; j++)
                {
                    if(arr[j][i] != 0)
                    {
                        check1 = false;
                        break;
                    }
                }

                if(check1)
                {
                    check = true;
                    break;
                }
            }
        }

        else if(xa > xb)
        {
            for(int i = miny; i <= maxy; i++)
            {
                bool check1 = true;

                for(int j = xb + 1; j <= xa - 1; j++)
                {
                    if(arr[j][i] != 0)
                    {
                        check1 = false;
                        break;
                    }
                }

                if(check1)
                {
                    check = true;
                    break;
                }
            }
        }

        else
        {
            check = true;
        }
    }

    return check;
}

bool find_way(int arr[][GAME_COLUMN], int xa, int ya, int xb, int yb)
{
    bool success = true;

    if(!check_x(arr, xa, ya, xb, yb) && !check_y(arr, xa, ya, xb, yb))
    {
        success = false;
    }

    return success;
}
