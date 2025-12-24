#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n), nega, pos, zero;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] < 0)
      nega.push_back(v[i]);
    else if (v[i] > 0)
      pos.push_back(v[i]);
    else
      zero.push_back(v[i]);
  }
  if (pos.size() == 0) {
    pos.push_back(*(nega.end() - 1));
    pos.push_back(*(nega.end() - 2));
    nega.erase(nega.end() - 2);
    nega.pop_back();
    }
  if (nega.size() % 2 == 0) {
    zero.push_back(*(nega.end() - 1));
    nega.pop_back();
  }

  cout << nega.size() << " ";
  for (auto u : nega) cout << u << " ";
  cout << '\n';
  cout << pos.size() << " ";
  for (auto u : pos) cout << u << " ";
  cout << '\n';
  cout << zero.size() << " ";
  for (auto u : zero) cout << u << " ";
  cout << '\n';
  return 0;
}