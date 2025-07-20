#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, x;
  cin >> n >> x;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll stored;
  for (ll i = 0; i < n; i++) {
    if (v[i] == 1) {
      stored = i;
    }
  }
  ll find = n - stored;
  if (find <= x) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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