#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m;
  cin >> n >> m;
  vector<int> vec(n);
  for (ll i = 0; i < n; i++) cin >> vec[i];
  sort(vec.begin(), vec.end());
  ll earn = 0;
  for (ll i = 0; i < m; i++) {
    if (vec[i] <= 0) {
      earn += abs(vec[i]);
    }
  }
  cout << earn << '\n';
  return 0;
}