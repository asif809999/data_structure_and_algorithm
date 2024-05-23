using namespace std;
#include <bits/stdc++.h>

vector<int> getConcatenation(vector<int> &nums)
{
    int arrayLength = nums.size();
    for (int i = 0; i < arrayLength; i++)
    {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main()
{
}
