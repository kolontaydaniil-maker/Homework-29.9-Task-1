#include "Array.h"

Array::Array(int* a, int s)
{
    size = s;
    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = a[i];
    }
}

Array::~Array()
{
    delete[] arr;
}

void Array::Show()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void Array::Show(string info)
{
    cout << info << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}