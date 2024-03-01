using namespace std;
#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
// #include <vector>
// #include <bits/stdc++.h>
// #include <sstream>

string mergeAlternately(string word1, string word2)
{
    int i = 0;
    string answer = "";
    while (i < word1.length() || i < word2.length())
    {
        if (i < word1.length())
        {
            answer += word1[i];
        }
        if (i < word2.length())
        {
            answer += word2[i];
        }
        i++;
    }
    return answer;
}

int main()
{
    string word1 = "abc", word2 = "pqr";
    string finalAnswer = mergeAlternately(word1, word2);
    cout << finalAnswer << endl;

    return 0;
}
