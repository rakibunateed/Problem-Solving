#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  if (n == 1) {
    cout << "1\n";
    cout << "1\n";
    return;
  } else if (n == 2) {
    cout << "1\n";
    cout << "1\n";
    return;
  } else if (n == 3) {
    cout << "2\n";
    cout << "1 3\n";
    return;
  }
  vector<ll> od, ev;
  for (ll i = 1; i <= n; i++) {
    if (i & 1)
      od.push_back(i);
    else
      ev.push_back(i);
  }
  cout << n << '\n';
  for (auto u : ev) cout << u << " ";
  for (auto u : od) cout << u << " ";
  cout << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solution();
  return 0;
}