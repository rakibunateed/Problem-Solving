#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> vec(n);
  ll ods = 0, evs = 0;
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
    if (i & 1)
      ods += vec[i];
    else
      evs += vec[i];
  }
  ll odc = n / 2, evc = n / 2;
  if (n & 1) evc++;
  if (ods % odc != 0 || evs % evc != 0 || ods / odc != evs / evc) {
    cout << "NO" << '\n';
    return;
  }
  cout << "YES" << '\n';
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