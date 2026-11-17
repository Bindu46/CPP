
#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int weight[] = {10, 20, 30};
    int profit[] = {60, 100, 120};
    int W = 50;

    int dp[4][51] = {0};

    for(int i = 1; i <= n; i++)
    {
        for(int w = 1; w <= W; w++)
        {
            if(weight[i-1] <= w)
            {
                dp[i][w] = max(
                    profit[i-1] + dp[i-1][w-weight[i-1]],
                    dp[i-1][w]
                );
            }
            else
            {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout << "Maximum Profit = " << dp[n][W];

    return 0;
}
