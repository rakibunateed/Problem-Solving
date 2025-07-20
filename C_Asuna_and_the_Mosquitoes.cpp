#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll od = 0, s = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    s += v[i];
    if (v[i] & 1) od++;
  }
  if (od == n) {
    cout << *max_element(v.begin(), v.end()) << '\n';
    return;
  } else if (od == 0) {
    cout << *max_element(v.begin(), v.end()) << '\n';
    return;
  }

  cout << s - od + 1 << "\n";
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