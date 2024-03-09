using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>

int maxSum(int arr[], int totalElement, int totalSum)
{
    if (totalElement < totalSum)
    {
        cout << "invalid";
        return -1;
    }
    int window_sum = 0;
    for (int i = 0; i < totalSum; i++)
    {
        window_sum += arr[i];
    }
    int max_sum = window_sum;
    for (int i = totalSum; i < totalElement; i++)
    {
        window_sum += arr[i] - arr[i - totalSum];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}

int main()
{
    int n = 5, k = 3;
    int inputArray[] = {16, 12, 9, 19, 11, 8};
    cout << " maximum sum is: " << maxSum(inputArray, n, k);

    return 0;
}
