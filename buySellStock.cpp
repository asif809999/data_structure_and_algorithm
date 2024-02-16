#include <iostream>
/* #include <math.h>
#include <string> */
#include <vector>

#include <limits.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int buyAtPrice = INT_MAX;
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        buyAtPrice = min(buyAtPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - buyAtPrice);
    }
    return maxProfit;
}
int main()
{
    vector<int> inputStockPrice = {7, 16, 5, 34, 30};

    int answer;

    answer = maxProfit(inputStockPrice);
    cout << answer;
    return 0;
}
