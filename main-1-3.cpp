#include <iostream>
extern void count_digits(int array[4][4]);

int main()
{
    int array[4][4] = {
        {1, 1, 1, 1},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {9, 8, 7, 6},
    };

    count_digits(array);
}