#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) cin >> a[i];
  ll r = a[0] % k;
  for (ll i = 0; i < n; i++)
    if (a[i] % k != r) a[i] += k;
  for (ll i = 0; i < n; i++) cout << a[i] << (i + 1 == n ? '\n' : ' ');
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