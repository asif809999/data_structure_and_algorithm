#include <iostream>
using namespace std;

int main()
{
    /* int a = 24;

    if (a>20)
    {
        cout << "love ";
    }
    else if(a==24)
    {
        cout << "lovely";
    }
    else{
        cout<<"asif";
    }
    cout<<a; */

    /*  char a;
     cout<<"enter the input: "<<endl;
     cin >> a;
     int asciiValue = int(a);

     if ((asciiValue < 58) && (asciiValue > 47))
     {

         cout << "its a number ";
     }
     else if ((asciiValue < 91) && (asciiValue > 64))
     {
         cout << "its a upper case ";
     }
     else if ((asciiValue < 123) && (asciiValue > 96))
     {
         cout << "its a lowercase ";
     }
     else
     {
         cout << "out of range";
     } */

    /* int n, answer = 0;

    cout << "enter the input: ";
    cin >> n;

    for (int i = 2; i <= n; i = i + 2)
    {
        answer = answer + i;
    }
    cout << answer<<endl; */

    double celcius=0.0,fahrenheit=0.0;
    cout<<"enter fahrenheit: ";
    cin>>fahrenheit;

    celcius = ((fahrenheit-32.0)*(5.0/9.0));
    cout<<celcius;
    return 0;
}