#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  unordered_map<ll, ll> freq;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    freq[v[i]]++;
  }
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    ll x = v[i];
    ll extra = k - x;
    if (freq[x] > 0 && freq[extra] > 0) {
      if (x == extra) {
        if (freq[x] > 1) {
          cnt++;
          freq[x] -= 2;
        }
      } else {
        cnt++;
        freq[x]--;
        freq[extra]--;
      }
    }
  }
  cout << cnt << '\n';
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