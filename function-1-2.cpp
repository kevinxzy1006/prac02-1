#include <iostream>

int is_identity(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1) // if the numbers on the diagonal are not equal to one, this is not a identity matrix.
                {
                    return 0;
                }
            }
            else
            {
                if (array[i][j] != 0) // if the numbers that are not on the diagonal are not equal to zero, this is not a identity matrix.
                {
                    return 0;
                }
            }
        }
    }
    return 1; // if the conditions above are not satisfied, this is a identity matrix.
}