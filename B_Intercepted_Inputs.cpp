#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) cin >> a[i];
  unordered_set<ll> st;
  ll x, y = n - 2;
  for (ll i = 0; i < n; i++) {
    x = y / a[i];
    if (y % a[i] == 0) {
      if (st.count(x)) {
        cout << x << ' ' << a[i] << '\n';
        return;
      } else
        st.insert(a[i]);
    }
  }
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solve();
}