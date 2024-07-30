#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

using namespace std;

int main()
{
    // Test cases
    int array1[5] = {1, 2, 3, 4, 5};             // case 1: array that is not a palindrome array
    int array2[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1}; // case 2: palindrome array
    int array3[] = {};                           // case 3: empty array.

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    int length3 = sizeof(array3) / sizeof(array3[0]);

    sum_if_palindrome(array1, length1);
    sum_if_palindrome(array2, length2);
    sum_if_palindrome(array3, length3);

    return 0;
}