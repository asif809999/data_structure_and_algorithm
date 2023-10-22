#include <iostream>
using namespace std;

/* You are given an integer n. Check if n has an odd divisor,greater than one
(does there exist such a number x (x>1) that n is divisible by x and x is odd).
For example, if n=6, then there is x=3. If n=4, then such a number does not exist.
Codeforces Round 697 (Div. 3) */

int main()
{
    int n, sum;
    cout << "enter n: ";
    cin >> n;
    sum = 0;

    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }

    cout << sum << endl;
    return 0;
}