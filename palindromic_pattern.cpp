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
            cout << "  ";
        };
        int z =i;
        for (int j = 1; j <= z; z--)
        {
            cout << z << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
         cout << endl;
    } 
}
