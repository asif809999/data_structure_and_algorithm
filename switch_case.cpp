#include <iostream>
using namespace std;

// a simple calculator using switch case;

int main()
{

    float inputNumber1, inputNumber2;
    cout<<"input numbers: ";
    cin >> inputNumber1 >> inputNumber2;
    
    char op;
    cout << "enter operator :";
    
    cin >> op;
    switch (op)
    {
    case '+':
        cout<<inputNumber1 + inputNumber2<<endl;
        break;
    case '-':
        cout<<inputNumber1 - inputNumber2<<endl;
        break;
    case '/':
        cout<<inputNumber1 / inputNumber2<<endl;
        break;
    case '*':
        cout<<inputNumber1 *inputNumber2<<endl;
        break;

    default:
        cout << "please enter anothre operator";

        break;
    }
}
