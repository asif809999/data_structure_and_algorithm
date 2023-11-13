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
        for (int j = 1; j <= numberOfRows; j++)
        {
            if (j <= numberOfRows - i)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }
            
        }
        cout << endl;
    }
}
