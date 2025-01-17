#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    cout << "#";
  }
  cout << '\n';

  for (ll i = 2; i <= n - 1; i++) {
    cout << "#";
    for (ll j = 2; j <= n - 1; j++) cout << ".";
    cout << "#\n";
  }

  for (ll i = 0; i < n; i++) {
    cout << "#";
  }
  return 0;
}