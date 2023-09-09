
#include <bits/stdc++.h>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int n, p;

  cin >> n >> p;
  vector<int> clust(n);
  unordered_set<int> butt;

  for (auto &i : clust)
  {
    cin >> i;
  }

  sort(clust.begin(), clust.end());

  int res = 0;
  int prev = 0;
  for (auto i : clust)
  {
    int x = ceil((double)i / p);

    if (prev >= x)
      x++;
    res += x;
    prev = x;
    cout << i << " " << x << endl;
  }

  cout << "#" << res
       << endl;

  return 0;
}

/*  I/O:


3 2
4 6 6 --> 9

2 3
4 5 --> 5
*/
