#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;


void solve() {
	int n, k;
	string s;
	cin >> n >> k;
	getString(s);
	if (k > n / 2) {
		cout << -1 << endl;
		return;
	}
	int count = 0;
	for (int i = 0; i < k; i++) {
		if (s[i] == 'L') count++;
		if (s[n - 1 - i] == 'R') count++;
	}
	cout << count << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
