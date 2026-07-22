#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n, q = -1, cost = 0, x = 0, y = 0;
  cin >> n;
  string s;
  getString(s);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R')
      x++;
    else
      y++;
		if (q == -1) {
			if (x > y) q = 1;
			else q = 2;
		}
		else if (q == 1) {
			if (x < y) {
				cost += 1;
				q = 2;
			}
		}
		else {
			if (y < x) {
				cost += 1;
				q = 1;
			}
		}
  }
  cout << cost << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
