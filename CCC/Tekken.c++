// Ujjwal R Sanagapati
//  https://www.codechef.com/problems/TEKKEN?tab=statement
//
#include <bits/stdc++.h>
#define end "\n"
using namespace std;

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b and a > c or a >= (b + c))
    cout << "YES" << end;
  else if (a < b and a < c)
    cout << "NO" << end;
  else
  {
    int x = max(b, c) - min(b, c);
    if (a - x > 0)
      cout << "YES" << end;
    else
      cout << "NO" << end;
  }
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