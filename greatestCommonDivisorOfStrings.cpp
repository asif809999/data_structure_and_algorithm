using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
#include <bits/stdc++.h>
// #include <sstream>

string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
int main()
{
    string str1 = "ABCABC", str2 = "ABC";
    cout<<gcdOfStrings(str1,str2);
    return 0;
}
