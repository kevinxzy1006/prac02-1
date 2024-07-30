#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        if (integers[i] != integers[length - i - 1]) // check if the array is palindrome.
        {
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) // add all the elements together
    {
        sum += integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length)
{
    if (length <= 0)
    {
        // Output that the array is empty.
        cout << "Empty array." << endl;
        return -1;
    }
    if (is_palindrome(integers, length))
    {
        // Output the result.
        cout << "This is a palindrome array, the sum of the elements is: " << sum_array_elements(integers, length) << "." << endl;
        return sum_array_elements(integers, length);
    }
    else
    {
        // Output a message as the result if this is not a palindrome array
        cout << "This is not a palindrome array." << endl;
        return -2;
    }
}