#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
bool cmd(const pair<ll, ll> &p1, const pair<ll, ll> &p2) {
  if (p1.first > p2.first)
    return 1;
  else if (p1.first == p2.first)
    return (p1.second < p2.second);
  return 0;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll> > v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), cmd);
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] == v[k - 1]) {
      cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}