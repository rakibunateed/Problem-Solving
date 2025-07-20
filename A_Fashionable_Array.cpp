#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  vector<ll> prefixSum1(n), prefixSum2(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (ll i = 0; i < n - 1; i++) {
    prefixSum1[i] = v[0] + v[n - i - 1];
  }
  for (ll i = 0; i < n - 1; i++) {
    prefixSum2[i] = v[n - 1] + v[i];
  }
  ll sum1, sum2;
  for (ll i = 0; i < n; i++) {
    if (prefixSum1[i] % 2 == 0) {
      sum1 = i;
      break;
    }
  }
  for (ll i = 0; i < n; i++) {
    if (prefixSum2[i] % 2 == 0) {
      sum2 = i;
      break;
    }
  }
  cout << min(sum1, sum2) << "\n";
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