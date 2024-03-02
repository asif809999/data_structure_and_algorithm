using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
#include <bits/stdc++.h>
// #include <sstream>

int isPairSum(vector<int> &arr, int size, int pairSum)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == pairSum)
        {
            return 1;
        }
        else if (arr[i] + arr[j] < pairSum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}

int main()
{
    vector<int> input = {2, 3, 5, 8, 9, 10, 11};
    int checkSum = 17;
    int arraySize = input.size();
    sort(input.begin(), input.end());
    cout << (isPairSum(input, arraySize, checkSum) ? "True" : "False");
    return 0;
}
