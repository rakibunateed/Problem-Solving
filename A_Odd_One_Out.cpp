#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  cout << (a ^ b ^ c) << '\n';
}
int main(int argc, char const* argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}