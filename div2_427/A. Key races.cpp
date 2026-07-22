#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int s, t1, t2, d1, d2, s1, s2;
  cin >> s >> t1 >> t2 >> d1 >> d2;
  s1 = d1 * 2 + s * t1;
  s2 = d2 * 2 + s * t2;
  if (s1 == s2)
    cout << "Friendship";
  else if (s1 < s2)
    cout << "First";
  else
    cout << "Second";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
