#include <iostream>
#include <cmath>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int result = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        // sort the array with most significant binary at the start and the least significant digit at the end
        if (binary_digits[i] == 1)
        {
            result += pow(2, number_of_digits - 1 - i);
        }
    }
    return result;
}