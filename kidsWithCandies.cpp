using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
#include <bits/stdc++.h>
// #include <sstream>

int maxel(vector<int> arr)
    {
        int m=arr[0], n = arr.size();
       for(int i = 1 ; i <n;i++ )
       {
          if(arr[i]>m)
          m=arr[i];
       }
       return m;
    }
    vector<bool> kidsWithCandies(vector<int>& arr, int e) {
        int g = maxel(arr) , n = arr.size();
        vector<bool>ans;
        for(int i = 0 ; i <n;i++ )
        {
           if(arr[i]+e>=g)
           ans.push_back(true);
           else
           ans.push_back(false);
        }
        return ans;
    }

int main()
{

    
    return 0;
}
