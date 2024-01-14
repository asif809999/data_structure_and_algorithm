#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, answer = 0, lastDigit, i = 0;
    cout << "enter binary number: " << endl;
    cin >> n;
    while (n != 0)
    {
        lastDigit = n % 10;

        if (lastDigit == 1)
        {
            answer = answer + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << answer << endl;
    return 0;
}