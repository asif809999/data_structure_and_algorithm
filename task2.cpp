#include <iostream>
using namespace std;

int main()
{
    /* for (int i=1; i<=5; i++){
        cout<< i << " ";
        i++;
    }
    output: 1 3 5*/

    /* for (int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        i++;
    }
    output: unlimited 0*/
    /* for (int i = 0; i <= 15; i+=2)
    {
        cout << i << " ";
        if( i&1){
            continue;
        }
        i++;
    } output 0 3 5 7 9 11 13 15 */

    /* for(int i=0;i<5;i++){
        for(int j=i; j<=5; j++){
            cout << i << " " << j <<endl;
        }
    } output 0 0
            0 1
            0 2 */
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
        return 0;
    }
}
