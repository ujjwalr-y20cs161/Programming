// Ujjwal R Sanagapati
//
#include <bits/stdc++.h>
using namespace std;

int Bin(vector<int> arr, int low, int high, int k)
{
  if (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == k)
      return mid;
    else if (arr[mid] > k)
      return Bin(arr, low, mid - 1, k);
    else
      return Bin(arr, mid + 1, high, k);
  }
  return -1;
}

void solve()
{
  int n;
  cin >> n;

  vector<int> songs(n);
  for (auto &i : songs)
  {
    cin >> i;
  }

  int k;
  cin >> k;

  n = songs[k - 1];

  sort(songs.begin(), songs.end());

  cout << "$" << Bin(songs, 0, songs.size() - 1, n) + 1 << endl;
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