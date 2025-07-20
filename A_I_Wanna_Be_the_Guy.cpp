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
  ll p;
  cin >> p;
  vector<ll> x(p);
  for (ll i = 0; i < p; i++) cin >> x[i];
  ll q;
  cin >> q;
  vector<ll> y(q);
  for (ll i = 0; i < q; i++) cin >> y[i];
  set<ll> s;
  for (ll num : x) s.insert(num);
  for (ll num : y) s.insert(num);
  cout << (s.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
  return 0;
}