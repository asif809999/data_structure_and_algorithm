#include <iostream>
// #include <math.h>
using namespace std;

void swapArrayFunction(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArrayFunction(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()

{
    int oddNumberOfArray[7] = {3, 5, 1, 0, 8, 5, 2};

    swapArrayFunction(oddNumberOfArray, 7);
    printArrayFunction(oddNumberOfArray, 7);

    return 0;
}
