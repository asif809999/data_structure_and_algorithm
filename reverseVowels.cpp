using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
#include <bits/stdc++.h>
// #include <sstream>

string reverseVowels(string s)
{
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            v.push_back(i);
        }
    }
    for (int start = 0, end = v.size() - 1; start < end; start++, end--)
    {
        swap(s[v[start]], s[v[end]]);
    }
    return s;
}
int main()
{
    string str1 = "leetcode";
    string answer = "";
    answer = reverseVowels(str1);
    cout << answer;
    return 0;
}
