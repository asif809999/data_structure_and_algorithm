#include <iostream>
using namespace std;

bool isEven(int checkNumber)
{
    if (checkNumber & 1)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    int number;
    cout<<"enter the number to check"<<endl;
    cin>>number;
    if (isEven(number))
    {
        cout << "it is an even number";
    }
    else
        cout << "it is an odd number";
}
