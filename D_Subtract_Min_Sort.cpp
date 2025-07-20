#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Traverse through the sequence and check if it's possible to make it
  // non-decreasing
  for (ll i = 0; i < n - 1; i++) {
    // If a[i] > a[i+1], we can reduce a[i] to a[i+1]
    if (a[i] > a[i + 1]) {
      // If a[i] cannot be reduced to a[i+1], it's impossible
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
