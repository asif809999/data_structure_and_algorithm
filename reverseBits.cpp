using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
#include <vector>
// #include <bits/stdc++.h>

int singleNumber(vector<int> &nums)
{
    int a = nums[0];
    int size = nums.size();
    for (int i = 1; i < size; i++)
    {
        a = a ^ nums[i];
    }

    return a;
}

int main()
{

    return 0;
}
