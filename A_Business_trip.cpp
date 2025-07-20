#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll k;
  cin >> k;
  vector<ll> v;
  for (ll i = 0; i < 12; i++) {
    ll x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.rbegin(), v.rend());
  ll cnt = 0, s = 0;
  bool find = false;
  for (ll i = 0; i < v.size(); i++) {
    if (k <= 0) break;
    s += v[i];
    cnt++;
    if (s >= k) {
      find = true;
      break;
    }
  }
  if (cnt == 0)
    cout << "0\n";
  else if (find)
    cout << cnt << '\n';
  else
    cout << "-1\n";
  return 0;
}