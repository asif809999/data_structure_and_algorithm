using namespace std;
#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
#include <vector>
//  #include <bits/stdc++.h>
int removeElement(vector<int> &nums, int val)
{

    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    
    return 0;
}
