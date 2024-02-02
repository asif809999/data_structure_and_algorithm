#include <iostream>
// #include <math.h>
using namespace std;

void swapArrayFunction(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
void printArrayFunction(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j]<<" ";
    }
}

int main()

{
    int evenNumberOfArray[8] = {3, 5, 1, 0, 8, 5, 2, 9};

    swapArrayFunction(evenNumberOfArray, 8);
    printArrayFunction(evenNumberOfArray, 8);

    return 0;
}
