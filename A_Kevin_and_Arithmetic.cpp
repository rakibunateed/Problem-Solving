#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, s = 0, cnt = 0;
  cin >> n;
  vector<ll> od, ev;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x & 1)
      od.push_back(x);
    else
      ev.push_back(x);
  }
  vector<ll> v = ev;
  v.insert(v.end(), od.begin(), od.end());
  for (ll i = 0; i < v.size(); i++) {
    s += v[i];
    if (!(s & 1)) {
      cnt++;
      while (!(s & 1)) s /= 2;
    }
  }
  cout << cnt << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}