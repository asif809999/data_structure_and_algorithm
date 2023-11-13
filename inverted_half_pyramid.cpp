#include <iostream>
using namespace std;

// paterns;

int main()
{
    int numberOfRows;
    cout << "enter number of row: " << endl;
    cin >> numberOfRows;

    for (int i = 1; i <= numberOfRows; i++)
    {
        for (int j = numberOfRows; i <= j; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
