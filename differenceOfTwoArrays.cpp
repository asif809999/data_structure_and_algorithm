using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> setOne(nums1.begin(), nums1.end());
    unordered_set<int> setTwo(nums2.begin(), nums2.end());
    vector<int> one, two;

    for (int i : setOne)
    {
        if (setTwo.count(i) == 0)
            one.push_back(i);
    }

    for (int i : setTwo)
    {
        if (setOne.count(i) == 0)
            two.push_back(i);
    }

    return {one, two};
}

int main()
{
}
