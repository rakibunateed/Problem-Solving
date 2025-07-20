#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll count1 = 0, count2 = 0;
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0; i < n - 1; i++) {
    if (v[i] > v[i + 1]) {
      count1 = max(count1, count2);
      count2 = 0;
      continue;
    }
    count2++;
  }
  cout << max(count1, count2) + 1 << '\n';
  return 0;
}