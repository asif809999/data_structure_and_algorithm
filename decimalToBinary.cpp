#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, answer = 0, i = 0,bit;
    cout << "enter decimal number: " << endl;
    cin >> n;
    while (n != 0)
    {
        bit=n&1;
        answer=(bit*pow(10,i))+answer;
        n=n>>1;
        i++;
    }
    cout << "answer is: "<< answer << endl;
    return 0;
}