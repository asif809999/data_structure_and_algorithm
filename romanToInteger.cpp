#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
using namespace std;

int lengthOfLastWord(string words)
{
    int size = words.size();
    int lastWordLength = 0;
    int wordIndex = size - 1;
    int flag = 0;

    while (wordIndex >= 0)
    {
        if (words[wordIndex] == ' ' && flag)
            break;
        if (words[wordIndex] != ' ')
        {

            lastWordLength++;
            flag = 1;
        }

        wordIndex--;
    }
    return lastWordLength;
}

int main()
{

    int finalAnswer = lengthOfLastWord("Love nepal  ");
    cout << finalAnswer;

    return 0;
}
