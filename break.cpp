#include <iostream>
using namespace std;

// finding out if a number is prime of not;

int main()
{
    int n, i;
    cout << "enter the number to test: " << endl;

    cin >> n;
    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            cout << "non PRIME" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "PRIME" << endl;
    }
    return 0;
}
