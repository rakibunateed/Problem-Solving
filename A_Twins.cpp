#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, total = 0, sum = 0, count = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    total += v[i];
  }
  sort(v.begin(), v.end(), greater<ll>());
  for (ll i = 0; i < n; i++) {
    sum += v[i];
    ll left = total - sum;
    count++;
    if (sum > left) {
      break;
    }
  }
  cout << count << '\n';
  return 0;
}