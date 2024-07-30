#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale)
{
    int printing_array[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printing_array[i][j] = array[i][j] * scale;
            cout << printing_array[i][j] << " ";
        }
        cout << endl;
    }
}