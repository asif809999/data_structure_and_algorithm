#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
using namespace std;
//#include <vector>
// #include <bits/stdc++.h>
int strStr(string haystack, string needle)
{
    int index = haystack.find(needle);
    if(index != string:: npos) return index;
    else return -1;
}

int main()
{
    int a = strStr("leetcode","leeto");
    cout<<a;

    return 0;
}
