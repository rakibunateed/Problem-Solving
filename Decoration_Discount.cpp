#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n), p;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (ll i = 0; i < n - 1; i++) {
    p.push_back(v[i] + v[i + 1] / 2);
  }
  sort(v.begin(), v.end());
  ll one = v[0];
  ll two = v[1];
  ll vmn = one + two;
  ll mn = *min_element(p.begin(), p.end());
  cout << min(mn, vmn) << "\n";
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