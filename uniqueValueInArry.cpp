#include <iostream>
// #include <math.h>
using namespace std;

int uniqueValueOfArray(int arr[], int size)
{
    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer = answer ^ arr[i];
    }
    return answer;
}

int main()

{
    int simpleArray[5] = {8, 8, 10, 5, 5};

    int uniqueNumber = uniqueValueOfArray(simpleArray, 5);
    cout << uniqueNumber;

    return 0;
}
