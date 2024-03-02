using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
//#include <bits/stdc++.h>
// #include <sstream>

bool isSubsequence(string s, string t)
{
    int n = s.length(), m = t.length();
    int j = 0;

    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;

    return (j == n);
}
int main()
{

    return 0;
}
