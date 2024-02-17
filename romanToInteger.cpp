#include <iostream>
//#include <math.h>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string romanNumber)
{
    int answer = 0;
    unordered_map<char,int> valuesOfString;
    valuesOfString['I'] = 1;
    valuesOfString['V'] = 5;
    valuesOfString['X'] = 10;
    valuesOfString['L'] = 50;
    valuesOfString['C'] = 100;
    valuesOfString['D'] = 500;
    valuesOfString['M'] = 1000;
    
    for (int i = 0; i < romanNumber.length(); i++)
    {
        if (valuesOfString[romanNumber[i]] < valuesOfString[romanNumber[i + 1]])
        {
            answer = answer - valuesOfString[romanNumber[i]];
        }
        else
        {
            answer = answer + valuesOfString[romanNumber[i]];
        }
    }
    return answer;
}
int main()
{
  

    int finalAnswer = romanToInt("VI");
    cout << finalAnswer;

    return 0;
}
