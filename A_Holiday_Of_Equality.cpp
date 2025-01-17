#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, sum = 0;
  cin >> n;
  vector<ll> vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end(), greater<ll>());
  for (ll i = 0; i < n - 1; i++) {
    if (vec[i] > vec[i + 1]) {
      sum += abs(vec[i] - vec[i + 1]);
      vec[i + 1] = vec[i];
    }
  }
  cout << sum << '\n';
  return 0;
}