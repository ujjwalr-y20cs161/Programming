#include <vector>
using namespace std;

bool isSubsetSum(vector<int> arr, int k)
{
  int n = arr.size();
  vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

  // Initialize the DP array
  dp[0][0] = 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= k; j++)
    {

      if (dp[i - 1][j] or dp[i - 1][j - arr[i - 1]])
        dp[i][j] = 1;
    }
  }

  return dp[n][k];
}