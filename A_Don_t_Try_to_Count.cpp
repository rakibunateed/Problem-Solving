#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n, m;
  string x, s;
  cin >> n >> m >> x >> s;
  for (ll i = 0; i < 6; i++) {
    if (x.find(s) != string::npos) {
      cout << i << '\n';
      return;
    }
    x += x;
  }

  cout << -1 << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}