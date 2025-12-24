#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v;
  for (ll i = 0; i < n; i++) {
    ll d, t;
    cin >> d >> t;
    v.push_back(d / t);
  }
  ll m = *max_element(v.begin(), v.end());
  for (ll i = 0; i < v.size(); i++) {
    if (v[i] == m) {
      cout << (i + 1) << '\n';
      return;
    }
  }
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