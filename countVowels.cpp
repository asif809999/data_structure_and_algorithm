using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>

int maxVowels(string s, int k)
{
    int currentCount = 0;
    int answer = 0;

    int vowels[26] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0};

    int n = s.size();

    for (int i = 0; i < n; i++)
    {

        currentCount += vowels[s[i] - 'a'];

        if (i >= k)
        {
            currentCount -= vowels[s[i - k] - 'a'];
        }

        answer = max(answer, currentCount);
    }
    return answer;
}

int main()
{
    int finalAnswer = maxVowels("leetcode", 3);
    cout << finalAnswer << endl;
    return 0;
}
