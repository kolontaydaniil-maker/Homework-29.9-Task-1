#include "Array.h"

int main()
{
    int numbers[] = { 5, 2, 8, 1, 10 };

    Array arr(numbers, 5);

    arr.Show();
    arr.Show("My array:");

    return 0;
}