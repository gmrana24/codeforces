#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
	string password, word;
	getString(password);
	int n, c = 0, b = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		getString(word);
		if (word[0] == password[1]) b = 1;
		if (word[1] == password[0]) c = 1;
		if (c & b || word == password) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
