#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int answer;
    cout << "enter the number to check if it is a prime: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            cout<<"not prime for :"<<i<<endl;
        }
        else
        {
            cout<<"prime for :"<<i<<endl;
        }
    }
    cout << answer << endl;

    /* int n,i,answer=1;
    cin>>n;
    for(i=1; i<=n;i++){
        answer=answer*i;  //factorial check
    }
    cout<<answer<<endl; */

    
    /* int n,i;
    cin>>n;
    for(i=1;i<=n;i=i+2){
        cout<<i<<endl; //printing odd number
    } */

    return 0;
}