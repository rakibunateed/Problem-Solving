#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  vector<ll> vec(m);
  for (ll i = 0; i < m; i++) cin >> vec[i];
  ll cnt = vec[0] - 1;
  for (ll i = 0; i < m - 1; i++) {
    if (vec[i] > vec[i + 1])
      cnt += n - (vec[i] - vec[i + 1]);
    else if (vec[i] < vec[i + 1])
      cnt += vec[i + 1] - vec[i];
  }
  cout << cnt << '\n';
  return 0;
}