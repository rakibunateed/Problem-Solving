#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll total = -1, index = -1;
  for (ll i = 0; i < n; i++) {
    ll sum = 0;
    for (ll j = i; j < k; j++) {
      sum += v[j];
    }
    if (total < sum) {
      total = sum;
      index = i;
      continue;
    }
    total = sum;
  }
  cout << total;

  return 0;
}