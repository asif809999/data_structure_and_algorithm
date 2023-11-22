#include <iostream>
using namespace std;

 int main()
{
     int numberOfRows, j, i;

    cout << "enter number of row: " << endl;
    cin >> numberOfRows;

    for ( i = 1; i <= numberOfRows; i++)
    {
        for ( j = 1; j <= numberOfRows - i; j++)
        {
            cout << "  ";
        }
        for ( j = 1; j <= 2*i - 1; j++)
        {

            cout << " *";
        }
        cout << endl;
    }

    for ( i = numberOfRows; i >= 1; i--)
    {
        for ( j = 1; j <= numberOfRows - i; j++)
        {
            cout << "  ";
        }
        for ( j = 1; j <= 2*i - 1; j++)
        {

            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
