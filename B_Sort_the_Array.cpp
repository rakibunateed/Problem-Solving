#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n), temp(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  temp = v;
  sort(v.begin(), v.end());
  ll l = -1, r = -1;
  for (ll i = 0; i < n; i++) {
    if (v[i] != temp[i]) {
      if (l == -1) l = i;
      r = i + 1;
    }
  }
  reverse(temp.begin() + l, temp.begin() + r);
  if (is_sorted(temp.begin(), temp.end())) {
    cout << "yes\n";
    if (l == -1) l = 0;
    if (r == -1) r = 1;
    cout << l + 1 << " " << r << '\n';
  } else {
    cout << "no\n";
  }
  return 0;
}