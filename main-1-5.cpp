#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);

int main()
{
    int array1[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3},
    };
    int array2[3][3] = {
        {3, 3, 3},
        {4, 4, 4},
        {4, 4, 5},
    };
    print_summed(array1, array2);

    return 0;
}