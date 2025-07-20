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
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll sereja = 0, dima = 0, flag = 1;
  while (!v.empty()) {
    if (flag == 1) {
      if (v[0] > v.back()) {
        sereja += v[0];
        v.erase(v.begin());
      } else {
        sereja += v.back();
        v.pop_back();
      }
      flag = 2;
    } else {
      if (v[0] > v.back()) {
        dima += v[0];
        v.erase(v.begin());
      } else {
        dima += v.back();
        v.pop_back();
      }
      flag = 1;
    }
  }
  cout << sereja << " " << dima << '\n';
  return 0;
}