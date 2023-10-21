#include <iostream>
using namespace std;

// even or odd number problem;

int main()
{
    int inputNumber;
    cout << "enter the number" << endl;
    cin >> inputNumber;
    if (inputNumber % 2 == 0)
    {
        cout << "It is an even number" << endl;
    }
    else
    {
        cout << "It is an odd number" << endl;
    }
    return 0;
}