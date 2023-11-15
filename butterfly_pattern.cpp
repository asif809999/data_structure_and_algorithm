#include <iostream>
using namespace std;

int main()
{
    int numberOfRows;

    cout << "enter number of row: " << endl;
    cin >> numberOfRows;

    for (int i = 1; i <= numberOfRows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        int space = 2 * numberOfRows - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for (int i = numberOfRows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        int space = 2 * numberOfRows - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
