#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
    return nums[0];
  if (n == 0)
    return 0;

  vector<int> dp(n);
  dp[0] = nums[0];

  for (int i = 1; i < n; i++)
  {
    dp[i] = max(nums[i], nums[i] * dp[i - 1]);
  }
  int maxx = 0;
  for (auto i : dp)
  {
    cout << i << " ";
    maxx = max(maxx, i);
  }

  return maxx;
}

int main()
{

  vector<int> nn = {-1, -2, -3, -4, -5, -6};
}