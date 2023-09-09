#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{

  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  return str1 == str2;
}

int main()
{

  string str1 = "listen";
  string str2 = "silent";

  if (isAnagram(str1, str2))
    cout << "YES";
  else
    cout << "NO";
  cout << endl;

  str1 = "listen";
  str2 = "silence";

  if (isAnagram(str1, str2))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}