// https://www.codechef.com/problems/SCALENE

/*
Problem: Problem

A,B, and C as the sides of a triangle, find whether the triangle is scalene.

Note:

A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle.



*/
#include <iostream>
using namespace std;

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b or b == c or a == c)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

int main()
{
  // your code goes here
  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }
  return 0;
}
