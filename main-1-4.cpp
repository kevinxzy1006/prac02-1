#include <iostream>
extern void print_scaled(int array[3][3], int scale);

int main()
{
    int scale = 5;
    int array[3][3] = {
        {1, 1, 1},
        {3, 4, 5},
        {5, 6, 7},
    };
    print_scaled(array, scale);
}