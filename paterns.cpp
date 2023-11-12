#include <iostream>
using namespace std;

// paterns;

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
            if( i==1 || i==numberOfRows || j==1 || j==numberOfColumn){
                cout << "*";
   
            }
            else {
                cout<< " ";
            }
            
        }
        cout <<endl;
    }
}
