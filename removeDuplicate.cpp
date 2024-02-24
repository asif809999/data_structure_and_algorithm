using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
#include <vector>
//  #include <bits/stdc++.h>
int removeDuplicates(vector<int> &nums)
{
    int k = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

/* int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return -1;
    int r = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[r] != nums[i])
            nums[++r] = nums[i];
    }

    return r + 1;
} */

int main()
{

    return 0;
}
