#include <iostream>
// #include <math.h>
using namespace std;

void swapValues(int arr[])
{
    int temp;
    temp = arr[1];
    arr[1] = arr[0];
    arr[0] = temp;
}

int main()

{
    int simpleArray[2] = {8, 5};

    swapValues(simpleArray);
    cout << simpleArray[0] << " " << simpleArray[1];

    return 0;
}
