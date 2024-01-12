#include <iostream>
using namespace std;

int main()
{
    int a=0, b=1, nextNumber;
    cout<< a << " "<< b<< " ";
    for (int i=1; i<=10; i++){   
        nextNumber = a+b;
        cout << nextNumber << " ";
        a=b;
        b=nextNumber;
    }

    return 0;
}
