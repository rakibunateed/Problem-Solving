#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, cnt1 = 0, cnt2 = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0; i < n; i++) {
    if (v[i] == 1) {
      cnt1 = max(cnt1, cnt2);
      cnt2 = 0;
      continue;
    }
    cnt2++;
  }
  cout << max(cnt1, cnt2) << '\n';
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