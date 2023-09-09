// Ujjwal R Sanagapati
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n = 26;
  vector<int> alp(n);

  for (auto &i : alp)
  {
    cin >> i;
  }

  string s;
  cin >> s;

  unordered_map<char, int> freq;

  for (auto i : s)
  {
    freq[i]++;
  }

  int x = 0;

  for (int i = 0; i < n; i++)
  {
    if (freq[('a' + i)] == 0)
    {
      x += alp[i];
    }
  }

  cout << x << endl;
}

int main()
{

  int t;
  cin >> t;

  while (t--)
    solve();
}