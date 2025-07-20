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
  vector<ll> v(n), ev, od, ans;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] & 1)
      od.push_back(v[i]);
    else
      ev.push_back(v[i]);
  }
  if (od.size() == 1)
    ans = od;
  else
    ans = ev;
  for (ll i = 0; i < n; i++) {
    if (v[i] == ans[0]) {
      cout << i + 1;
      break;
    }
  }
  return 0;
}