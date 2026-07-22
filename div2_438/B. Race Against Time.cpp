#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h *= 5;
  t1 *= 5;
  t2 *= 5;
  h -= 1;
  m -= 1;
  s -= 1;
  t1 -= 1;
  t2 -= 1;
  vector<int> arr(60);
  arr[t1] = 1;
  arr[t2] = 2;
  arr[h] = -1;
  arr[m] = -1;
  arr[s] = -1;

  for (int i = t1; i != t2; i = (i + 1) % 60) {
    if (arr[i] == 2) {
      cout << "YES" << endl;
      return;
    }
    if (arr[i] == -1)
      break;
  }
  cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
