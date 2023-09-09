#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unsigned long long a = 0, b = 1;

  for (int i = 2; i <= n; i++)
  {
    unsigned long long c = a + b;
    a = b;
    b = c;
  }
  cout << b << endl;
}