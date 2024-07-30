#include <iostream>
extern int array_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int sum_min_max(int integers[], int length);
using namespace std;

int main()
{
    // Test cases
    int array1[] = {1, 2, 3, 4, 5}; // case 1
    int length1 = sizeof(array1) / sizeof(array1[0]);
    sum_min_max(array1, length1);

    int array2[] = {5, 4, 3, 2, 1}; // case 2
    int length2 = sizeof(array2) / sizeof(array2[0]);
    sum_min_max(array2, length2);

    int array3[] = {}; // case 3: empty array
    int length3 = 0;   // explicitly set the length of an empty array to 0
    sum_min_max(array3, length3);

    return 0;
}