#include <iostream>
using namespace std;

int main()
{
    int numberOfRows;

    cout << "enter number of row: " << endl;
    cin >> numberOfRows;
    
    for (int i = 1; i <= numberOfRows; i++)
    {

        for (int numberOfColumn = 1; numberOfColumn <= i; numberOfColumn++)
        {
            if((i+numberOfColumn)%2 == 0) {
                cout<< " 1";
            }
            else{
                cout<< " 0";
            }
        }
        cout << endl;
    }
}
