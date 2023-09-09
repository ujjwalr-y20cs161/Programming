#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
  if (amount == 0)
    return 0;

  vector<int> dp(amount + 1, 0);

  for (auto i : coins)
    dp[i] = 1;

  for (int i = 2; i <= amount; i++)
  {
    dp[i] = INT_MAX;
    int x = INT_MAX - 1;
    for (auto j : coins)
    {
      if (j <= i)
      {
        x = min(x, dp[i - j]);
      }
    }
    dp[i] = 1 + x;
  }

  if (dp[amount] == INT_MAX)
    return -1;
  return dp[amount];
}

int main()
{

  vector<int> coins = {2, 3, 5};
  cout << coinChange(coins, 1);
}