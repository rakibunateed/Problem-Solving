#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution(ll t) {
  ll a, b;
  cin >> a >> b;
  vector<ll> v(mx);
  vector<ll> prefixSum(mx);
  for (ll i = 1; i <= a; i++) cin >> v[i];
  for (ll i = 1; i <= a; i++) prefixSum[i] = (prefixSum[i - 1] + v[i]) % b;
  ll cnt = 0;
  map<ll, ll> m;
  m[0] = 1;
  for (ll i = 1; i <= a; i++) {
    cnt += m[prefixSum[i]];
    m[prefixSum[i]]++;
  }
  cout << "Case " << t << ": " << cnt << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++) solution(i);
  return 0;
}