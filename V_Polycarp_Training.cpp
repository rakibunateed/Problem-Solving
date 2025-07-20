#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll day = 1;
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    if (a[i] >= day) {
      ans++;
      day++;
    }
  }
  cout << ans << '\n';
  return 0;
}