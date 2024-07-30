#include <iostream>
#include <cmath>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main()
{
    // Test  cases
    int binary_digits1[] = {1, 0, 1};
    int number_of_digits1 = 3;
    cout << binary_to_int(binary_digits1, number_of_digits1) << endl; // Output: 5

    int binary_digits2[] = {1, 1, 0, 0, 1};
    int number_of_digits2 = 5;
    cout << binary_to_int(binary_digits2, number_of_digits2) << endl; // Output: 25

    return 0;
}