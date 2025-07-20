#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution() {
  ll n, k;
  cin >> n >> k;

  vector<ll> v;
  vector<ll> prefixSum(n + 1);

  for (ll i = 1; i <= n; i++) {
    if (i & 1) {
      v.push_back(i);
    }
  }
  for (ll i = 1; i <= v.size(); i++) {
    prefixSum[i] = prefixSum[i - 1] + v[i];
  }

  for (auto u : prefixSum) {
    cout << u << " ";
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}
