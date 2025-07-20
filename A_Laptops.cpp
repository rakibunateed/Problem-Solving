#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());
  bool flag = true;
  for (ll i = 0; i < n - 1; i++) {
    if (v[i].second > v[i + 1].second) {
      cout << "Happy Alex" << "\n";
      flag = false;
      break;
    }
  }
  if (flag) cout << "Poor Alex\n";
  return 0;
}