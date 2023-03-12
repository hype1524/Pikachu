bool check_possible(int arr[][GAME_COLUMN])
{
    bool check = false;

    for(int i = 1; i < GAME_ROW; i++)
    {
        for(int j = 1; j < GAME_COLUMN; j++)
        {
            for(int k = 1; k < GAME_ROW; k++)
            {
                for(int l = 1; l < GAME_COLUMN; l++)
                {
                    if(i != k || j != l)
                    {
                        if(arr[i][j] == arr[k][l])
                        {
                            if(find_way(arr, i, j, k, l))
                            {
                                check = true;
                                break;
                            }
                        }
                    }
                }

                if(check)
                {
                    break;
                }
            }

            if(check)
            {
                break;
            }
        }

        if(check)
        {
            break;
        }
    }

    return check;
}
