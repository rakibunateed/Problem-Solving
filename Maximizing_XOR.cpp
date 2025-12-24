#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll l, r;
  cin >> l >> r;
  vector<ll> v;
  for (ll i = l; i <= r; i++)
    for (ll j = i + 1; j <= r; j++) v.push_back(i ^ j);
  cout << *max_element(v.begin(), v.end()) << '\n';
  return 0;
}