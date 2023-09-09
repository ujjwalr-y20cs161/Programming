// Ujjwal R Sanagapati
// BMI : https://www.codechef.com/problems/BMI

#include <bits/stdc++.h>
#define end "\n"
#define PI 3.14159
using namespace std;

void solve()
{
  int m, h;
  cin >> m >> h;

  int x = m / (h * h);

  switch (x)
  {
  case 0 ... 18:
    cout << 1 << endl;
    break;
  case 19 ... 24:
    cout << 2 << endl;
    break;
  case 25 ... 29:
    cout << 3 << endl;
    break;
  default:
    cout << 4 << end;
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