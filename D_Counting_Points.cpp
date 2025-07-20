#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long ll;

ll count(ll n, ll m, vector<ll>& x, vector<ll>& r) {
  ll mx = *max_element(r.begin(), r.end());
  set<pair<ll, ll>> points;
  for (ll y = -mx; y <= mx; ++y) {
    vector<pair<ll, ll>> in;
    for (ll i = 0; i < n; ++i) {
      ll radSqr = r[i] * r[i];
      ll ySquared = y * y;
      if (ySquared > radSqr) continue;
      ll dx = sqrt(radSqr - ySquared);
      ll xStart = x[i] - dx;
      ll xEnd = x[i] + dx;
      in.push_back({xStart, xEnd});
    }
    sort(in.begin(), in.end());
    vector<pair<ll, ll>> merged;
    for (auto& interval : in) {
      if (merged.empty() || merged.back().second < interval.first) {
        merged.push_back(interval);
      } else {
        merged.back().second = max(merged.back().second, interval.second);
      }
    }
    for (auto& interval : merged) {
      for (ll xVal = interval.first; xVal <= interval.second; ++xVal) {
        points.insert({xVal, y});
      }
    }
  }
  return points.size();
}
void solve() {
  ll n, m;
  cin >> n >> m;
  vector<ll> x(n);
  vector<ll> r(n);
  for (ll i = 0; i < n; ++i) cin >> x[i];
  for (ll i = 0; i < n; ++i) cin >> r[i];
  ll result = count(n, m, x, r);
  cout << result << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solve();
  return 0;
}