#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  ll a[n];
  for (ll i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  if (n & 1) {
    swap(a[n - 1], a[n - 2]);
    for (ll i = 0; i < n - 1; i++) {
      swap(a[i], a[i + 1]);
      i++;
    }
  } else {
    for (ll i = 0; i < n - 1; i++) {
      swap(a[i], a[i + 1]);
      i++;
    }
  }
  for (ll i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';
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