using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>

int main()
{
    unordered_map<string, int> umap;
    umap["GFG"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
