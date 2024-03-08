using namespace std;
// #include <iostream>
//  #include <math.h>
//  #include <string>
//  #include <unordered_map>
//  #include <vector>
#include <bits/stdc++.h>
// #include <sstream>

/* void explainingPair()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {3, {4, 5}};
    cout << p2.first << " " << p2.second.first << endl;

    pair<int, int> p3[] = {{6, 7}, {8, 9}, {10, 11}};
    cout << p3[2].second << endl;
}
void explainingVector()
{
    vector<int> v1;
    v1.push_back(1);

    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    v2.emplace_back(3, 4);

    vector<int> v3(5, 100);
    vector<int> v4(3, 100);
    v4.emplace_back(44);

    vector<int>::iterator it = v4.begin();
    it = it + 3;
    cout << *(it) << " ";
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *(it) << " ";
    }

    // delete operation
    v4.erase(v4.begin() + 2, v4.begin() + 4);
    for (auto it : v4)
    {
        cout << it << " ";
    }

    // insert function
    vector<int> v5(2, 100);

    v5.insert(v5.begin(), 300);
    // v5.insert(v5.begin()+1,2,400);
    // v5.pop_back();
    for (int i = 0; i < v5.size(); i++)
    {
        cout << "v5 :" << v5[i] << " ";
    }
}
void explainingList()
{
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(0);
    //ls.emplace_front(12, 11);
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
void explainingDeque(){
    deque<int>dq;
    dq.push_back(5);
    dq.push_front(4);
    dq.emplace_back(6);
    dq.emplace_front(3);
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it << " ";
    }
} */

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return;
    int l = 0, r = 0;
    while (r < n)
    {
        if (nums[r] != 0)
        {
            swap(nums[l], nums[r]);
            l++;
        }
        r++;
    }
}

int main()
{
    vector<int> input = {0, 1, 0, 3, 12};
    moveZeroes(input);
    for (auto it : input)
    {
        cout << it << " ";
    }

    return 0;
}
