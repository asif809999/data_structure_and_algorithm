#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int input, i;
    bool flag = 0;

    cout << "enter the number: " << endl;
    cin >> input;

    for (i = 2; i < sqrt(input); i++)
    {
        if (input % i == 0)
        {
            cout << " non prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0 || input == 2)
    {
        cout << " prime number";
    }

    return 0;
}
