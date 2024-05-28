using namespace std;
#include <bits/stdc++.h>

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{

    int maxVal = INT_MIN;
    int n = candies.size();
    vector<bool> ans;
    for (int i = 0; i < n; i++)
    {
        maxVal = max(maxVal, candies[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extraCandies >= maxVal)
        {
            ans.push_back(true);
            continue;
        }
        ans.push_back(false);
    }
    return ans;
}

int main()
{
}
