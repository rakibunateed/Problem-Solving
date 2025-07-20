#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  if (is_sorted(v.begin(), v.end())) {
    cout << 0 << '\n';
    return;
  }

  set<ll> s;
  for (ll i = 0; i < n - 1; i++) s.insert(v[i]);
  cout << s.size() << '\n';
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