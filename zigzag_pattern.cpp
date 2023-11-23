#include <iostream>
using namespace std;

int main()
{
    int numberOfStars, numberOfRows, i, j;

    cout << "enter number of Stars: " << endl;
    cin >> numberOfStars;
    numberOfRows = 3;

    for (i = 1; i <= numberOfRows; i++)
    {

        for (j = 1; j <= numberOfStars; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << " *";
            }

            else
            {
                cout << "  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
