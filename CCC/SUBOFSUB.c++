// Ujjwal R Sanagapati
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int n = s.size(), count = 0, maxc = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[0] and s[i] != s[n - 1])
    {
      count++;
    }
    else
    {
      maxc = max(maxc, count);
      count = 0;
    }
  }
  int res = (maxc == 0) ? -1 : maxc;
  cout << res << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}