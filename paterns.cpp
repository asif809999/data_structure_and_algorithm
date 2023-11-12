#include <iostream>
using namespace std;

// operators;

int main()
{
    int numberOfRows, numberOfColumn;
    cout << "enter number of row: " << endl;
    cin >> numberOfRows;
    cout << "enter number of column: " << endl;
    cin >> numberOfColumn;
    for (int i = 1; i <= numberOfRows; i++)
    {
        for (int j = 1; j <= numberOfColumn; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}
