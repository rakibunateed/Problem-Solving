#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n), vec;
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll mxx = *max_element(v.begin(), v.end());
  ll mnn = *min_element(v.begin(), v.end());
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] != mxx && v[i] != mnn)
      vec.push_back(v[i]);
    else
      cnt++;
  }

  cout << vec.size() << '\n';
  return 0;
}