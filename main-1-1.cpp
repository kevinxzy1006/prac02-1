#include <iostream>
extern int sum_diagonal(int array[4][4]);

using namespace std;

int main()
{
    int array[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7},
    };

    int sum = sum_diagonal(array);
    cout << "sum of diagonal elements: " << sum << endl;

    return 0;
}