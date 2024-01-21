#include <iostream>
using namespace std;

int power()
{
    int a, b, ans=1;
    cout<<"enter a and b as a^b: ";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int answer = power();
    cout << answer;
}
