using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
#include <vector>
// #include <bits/stdc++.h>

int missingNumber(vector<int> &nums)
{
    int result = nums.size();
    int i = 0;
    for (int num : nums)
    {

        result = result ^ i;
        result = result ^ num;
        i++;
    }
    return result;
}

/* int missingNumber(vector<int> &nums)
{

    int ans = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ i ^ nums[i];
    }
    return ans;
} */

int main()
{

    return 0;
}
