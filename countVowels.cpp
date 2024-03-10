using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>


void vowelCount(string checkVowel)
{
    int Count = 0, numberOfCharacter = checkVowel.size();
    ;
    bool vowel[26] = {false};
    vowel[0] = vowel[4] = vowel[8] = vowel[14] = vowel[20] = true;

    for (int i = 0; i < numberOfCharacter; i++)
    {
        if (vowel[checkVowel[i] - 'a'])
        {
            Count += 1;
        }
    }
    cout << Count;
}

int main()
{
    vowelCount("zue");
    return 0;
}
