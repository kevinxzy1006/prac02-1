#include <iostream>
extern int is_identity(int array[10][10]);
using namespace std;

int main()
{
    int array[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    };

    int isIdentity = is_identity(array);
    if (isIdentity == 1)
    {
        cout << "This is a identity matrix.";
    }

    if (isIdentity == 0)
    {
        cout << "This is not a identity matrix.";
    }
}