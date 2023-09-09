{
  // your code here

  if (n == m and n == 0)
    return 0;

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  int maxx = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (S1[i - 1] == S2[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        maxx = max(maxx, dp[i][j]);
      }
      else
      {
        dp[i][j] = 0;
      }
    }
  }

  return maxx;
}