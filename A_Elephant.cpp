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
  vector<ll> v = {5, 4, 3, 2, 1};
  ll i = 0, cnt = 0;
  while (n != 0) {
    if (v[i] <= n) {
      n -= v[i];
      cnt++;
    } else
      i++;
  }
  cout << cnt << '\n';
  return 0;
}