#include <iostream>
using namespace std;

// operators;

int main()
{
    int i = 10, j = 20, k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
}
