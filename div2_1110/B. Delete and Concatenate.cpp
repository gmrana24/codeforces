#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n, c;
  cin >> n >> c;
  vector<int> arr(n);
  for (auto &i : arr)
    cin >> i;
  sort(arr.begin(), arr.end());
  int i = 0, j = arr.size() - 1;
  ll ans = 0;
  while (i <= j) {
    if (arr[i] < c) {
      ans += arr[j] - c;
      j--;
      i++;
    } else {
      ans += arr[i] - c;
      i++;
    }
  }
  cout << ans << endl;
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
