#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    if (n == 0)
        return "";
    string answer = "";
    sort(begin(strs), end(strs));
    string a = strs[0];
    string b = strs[n - 1];

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            answer = answer + a[i];
        }
        else
        {
            break;
        }
    }
    return answer;
}

int main()
{

    return 0;
}
