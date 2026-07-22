#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n & 1) {
    string s;
    getString(s);
		cout << "NO" << endl;
    return;
  }
  int sum = 0, x;
  for (int i = 0; i < n; i++) {
    cin >> x;
		sum += x;
  }
	if (sum % 4) cout << "NO";
	else cout << "YES";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
