#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cnt1 = 0;
    for (int i = 0, x; i < n; i++) {
      cin >> x;
      cnt1 += x;
    }
    // If more than n−1 players claim a win, someone lied.
    cout << (cnt1 > n - 1 ? "YES\n" : "NO\n");
  }

  return 0;
}
