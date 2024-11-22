#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve() {
  ll n;
  cin >> n;
  bool find = false;
  if (n <= 2) {
    cout << "NO" << endl;
    return;
  }

  for (ll i = 3; i <= n; i += 2) {
    if (n % i == 0) {
      find = true;
      break;
    }
  }
  if (find) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
