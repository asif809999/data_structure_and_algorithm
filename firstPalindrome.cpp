#include <iostream>
// #include <math.h>
 #include <string>
// #include <unordered_map>
using namespace std;
 #include <vector>
// #include <bits/stdc++.h>

string firstPalindrome(vector<string> &words)
{

    for (auto word : words)
    {
        bool flag = true;
        for (int i = 0; i < word.size() / 2; i++)
        {
            if (word[i] != word[word.size() - 1 - i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            return word;
        }
    }
    return "";
}

int main()
{
    
    return 0;
}
