#include <iostream>
using namespace std;

int main()
{
    int numberOfRows;

    cout << "enter number of row: " << endl;
    cin >> numberOfRows;

    for (int i = 1; i <= numberOfRows; i++)
    {

        for (int j = i; j <= numberOfRows - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)

        {

            cout << " "<<j;
        }
        cout << endl;
    }
}
