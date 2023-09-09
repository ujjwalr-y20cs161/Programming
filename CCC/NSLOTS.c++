#include <bits/stdc++.h>

using namespace std;

bool NSolts(vector<vector<int>> slots)
{
  sort(slots.begin(), slots.end(), [](vector<int> a, vector<int> b)
       { return a[1] < b[1]; });

  vector<int> prev = slots[0];

  for (int i = 1; i < slots.size(); i++)
  {
    cout << slots[i][0] << "^" << slots[i][1] << endl;
    if (slots[i][0] < prev[1])
    {
      return false;
    }
    prev[0] = slots[i][0];
    prev[1] = slots[i][1];
  }
  return true;
}

int main()
{

  int n;
  cin >> n;
  vector<vector<int>> slots;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    slots.push_back({a, b});
  }

  if (NSolts(slots))
    cout << "YES";
  else
    cout << "NO";
}