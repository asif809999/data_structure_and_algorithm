#include <iostream>
using namespace std;

int main()
{
    int inputNumber, reversedNumber, lastDigit;
    cout << "enter the number: " << endl;
    cin >> inputNumber;

    reversedNumber = 0;
    while (inputNumber > 0)
    {
        lastDigit = inputNumber % 10 ;
        reversedNumber = reversedNumber * 10 + lastDigit;
        inputNumber = inputNumber / 10;
    }
    cout<<reversedNumber<<endl;
    return 0;
}
