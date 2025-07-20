#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solution() {
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  ll s = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    s += v[i];
  }
  sort(v.rbegin(), v.rend());
  v[0] -= 1;
  ll mx = *max_element(v.begin(), v.end());
  ll mn = *min_element(v.begin(), v.end());
  if (mx - mn > k) {
    cout << "Jerry\n";
    return;
  }
  if (s & 1)
    cout << "Tom\n";
  else
    cout << "Jerry\n";
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