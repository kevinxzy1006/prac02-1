#include <iostream>
using namespace std;

int array_max(int integers[], int length)
{
    // If the length is 0 or negative value, return -1.
    if (length <= 0)
    {
        return -1;
    }

    // Initialise the max value, let it be 0 first.
    int max = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (integers[i] > max)
        {
            // find the maximum value by comparing all the elements.
            max = integers[i];
        }
    }
    return max;
}

int array_min(int integers[], int length)
{
    // If the length is 0 or negative value, return -1.
    if (length <= 0)
    {
        return -1;
    }

    // Initialise the min value, let it be 0 first.
    int min = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (integers[i + 1] < min)
        {
            // find the minimum value by comparing all the elements.
            min = integers[i];
        }
    }
    return min;
}

int sum_min_max(int integers[], int length)
{
    // If the length is 0 or negative value, return -1.
    if (length <= 0)
    {
        // Output a message for empty array
        cout << "Empty array." << endl;
        return -1;
    }

    // calculat the max and min value of the array.
    int max = array_max(integers, length);
    int min = array_min(integers, length);

    int sum = max + min; // find the sum of the max and min value.
    // Output the values.
    cout << "The max value: " << max << ". The min value: " << min << ". The sum: " << sum << "." << endl;

    return sum;
}