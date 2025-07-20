#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
ll binarySearch(vector<ll> &v, ll x, ll low, ll high) {
  if (high >= low) {
    ll mid = low + (high - low) / 2;
    if (x == v[mid]) return mid;
    if (x > v[mid]) return binarySearch(v, x, mid + 1, high);
    return binarySearch(v, x, low, mid - 1);
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll q;
  cin >> q;
  for (ll i = 0; i < q; i++) {
    ll x;
    cin >> x;
    v.push_back(x);
    ll result = binarySearch(v, x, 0, n - 1);
    cout << result + 1 << '\n';
  }
  return 0;
}