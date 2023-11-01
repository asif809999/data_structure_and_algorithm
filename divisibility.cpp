#include <iostream>
using namespace std;

// operators;

int main()
{
    cout<<"enter the number to check if it is divisible by 2 or 3: "<<endl;
    int n ;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"divisble by both 2 and 3"<<endl;
    }
    else if(n%2==0){
        cout<<"divisble by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"divisble by 3"<<endl;     
    }
    else{
        cout<<"divisble by none"<<endl; 
    }
}
