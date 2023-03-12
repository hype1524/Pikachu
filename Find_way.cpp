bool find_way(int** arr, int x1, int y1, int x2, int y2)
{
    bool success = false;

    if(x1 == x2 && y1 != y2)
    {
        success = check_x(arr, x1, y1, y2);
    }

    else if(x1 != x2 && y1 == y2)
    {
        success = check_y(arr, y1, x1, x2);
    }

    else if(x1 != x2 && y1 != y2)
    {
        success = check_x_and_y(arr, x1, x2, y1, y2);
    }

    else
    {
        success = false;
    }

    return success;
}

bool check_x(int arr**, int x, int y1, int y2)
{
    bool check = false;

    if(y1 == y2 - 1)
    {
        check = true;
    }

    else if(y1 = y2 + 1)
    {
        check = true;
    }

    else if(y1 < y2 - 1)
    {
        bool check1 = false;

        for(int i = y1 + 1; i < y2; i++)
        {
            if(arr[x][i] != 0)
            {
                break;
            }

            else
            {
                if(i == y2 - 1)
                {
                    check1 = true;
                }
            }
        }

        if(!check1)
        {
            for(int i = x - 1; i >= 0; i--)
            {
                if(arr[i][y1] != 0 || arr[i][y2] != 0)
                {
                    break;
                }

                else
                {
                    for(int j = y1 + 1; j < y2; j++)
                    {
                        if(arr[i][j] != 0)
                        {
                            break;
                        }

                        else
                        {
                            if(j == y2 - 1)
                            {
                                check1 = true;
                            }
                        }
                    }

                    if(check1)
                    {
                        break;
                    }
                }
            }

            if(!check1)
            {
                for(int i = x + 1; i < GAME_ROW; i++)
                {
                    if(arr[i][y1] != 0 || arr[i][y2] != 0)
                    {
                        break;
                    }

                    else
                    {
                        for(int j = y1 + 1; j < y2; j++)
                        {
                            if(arr[i][j] != 0)
                            {
                                break;
                            }

                            else
                            {
                                if(j == y1 - 1)
                                {
                                    check1 = true;
                                }
                            }
                        }

                        if(check1)
                        {
                            break;
                        }
                    }
                }
            }
        }

        check = check1;
    }

    else if(y1 > y2 + 1)
    {
        bool check1 = false;

        for(int i = y2 + 1; i < y1; i++)
        {
            if(arr[x][i] != 0)
            {
                break;
            }

            else
            {
                if(i == y1 - 1)
                {
                    check1 = true;
                }
            }
        }

        if(!check1)
        {
            for(int i = x - 1; i >= 0; i--)
            {
                if(arr[i][y2] != 0 || arr[i][y1] != 0)
                {
                    break;
                }

                else
                {
                    for(int j = y2 + 1; j < y1; j++)
                    {
                        if(arr[i][j] != 0)
                        {
                            break;
                        }

                        else
                        {
                            if(j == y1 - 1)
                            {
                                check1 = true;
                            }
                        }
                    }

                    if(check1)
                    {
                        break;
                    }
                }
            }

            if(!check1)
            {
                for(int i = x + 1; i < GAME_ROW; i++)
                {
                    if(arr[i][y2] != 0 || arr[i][y1] != 0)
                    {
                        break;
                    }

                    else
                    {
                        for(int j = y2 + 1; j < y1; j++)
                        {
                            if(arr[i][j] != 0)
                            {
                                break;
                            }

                            else
                            {
                                if(j == y1 - 1)
                                {
                                    check1 = true;
                                }
                            }
                        }

                        if(check1)
                        {
                            break;
                        }
                    }
                }
            }
        }

        check = check1;
    }

    return check;
}

bool check_y(int arr**, int y, int x1, int x2)
{
    bool check = false;

    if(x1 == x2 - 1)
    {
        check = true;
    }

    else if(x1 = x2 + 1)
    {
        check = true;
    }

    else if(x1 < x2 - 1)
    {
        bool check1 = false;

        for(int i = x1 + 1; i < x2; i++)
        {
            if(arr[i][y] != 0)
            {
                break;
            }

            else
            {
                if(i == x2 - 1)
                {
                    check1 = true;
                }
            }
        }

        if(!check1)
        {
            for(int i = y - 1; i >= 0; i--)
            {
                if(arr[x1][i] != 0 || arr[x2][i] != 0)
                {
                    break;
                }

                else
                {
                    for(int j = x1 + 1; j < x2; j++)
                    {
                        if(arr[j][i] != 0)
                        {
                            break;
                        }

                        else
                        {
                            if(j == x2 - 1)
                            {
                                check1 = true;
                            }
                        }
                    }

                    if(check1)
                    {
                        break;
                    }
                }
            }

            if(!check1)
            {
                for(int i = y + 1; i < GAME_COLUMN; i++)
                {
                    if(arr[x1][i] != 0 || arr[x2][i] != 0)
                    {
                        break;
                    }

                    else
                    {
                        for(int j = x1 + 1; j < x2; j++)
                        {
                            if(arr[j][i] != 0)
                            {
                                break;
                            }

                            else
                            {
                                if(j == x1 - 1)
                                {
                                    check1 = true;
                                }
                            }
                        }

                        if(check1)
                        {
                            break;
                        }
                    }
                }
            }
        }

        check = check1;
    }

    else if(x1 > x2 + 1)
    {
        bool check1 = false;

        for(int i = x2 + 1; i < x1; i++)
        {
            if(arr[i][y] != 0)
            {
                break;
            }

            else
            {
                if(i == x1 - 1)
                {
                    check1 = true;
                }
            }
        }

        if(!check1)
        {
            for(int i = y - 1; i >= 0; i--)
            {
                if(arr[x2][i] != 0 || arr[x1][i] != 0)
                {
                    break;
                }

                else
                {
                    for(int j = x2 + 1; j < x1; j++)
                    {
                        if(arr[j][i] != 0)
                        {
                            break;
                        }

                        else
                        {
                            if(j == x1 - 1)
                            {
                                check1 = true;
                            }
                        }
                    }

                    if(check1)
                    {
                        break;
                    }
                }
            }

            if(!check1)
            {
                for(int i = y + 1; i < GAME_COLUMN; i++)
                {
                    if(arr[x2][i] != 0 || arr[x1][i] != 0)
                    {
                        break;
                    }

                    else
                    {
                        for(int j = x2 + 1; j < x1; j++)
                        {
                            if(arr[j][i] != 0)
                            {
                                break;
                            }

                            else
                            {
                                if(j == x1 - 1)
                                {
                                    check1 = true;
                                }
                            }
                        }

                        if(check1)
                        {
                            break;
                        }
                    }
                }
            }
        }

        check = check1;
    }

    return check;
}

bool check_x_and_y(int** arr, int x1, int y1, int x2, int y2)
{

}
