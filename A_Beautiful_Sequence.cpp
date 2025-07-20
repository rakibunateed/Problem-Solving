#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll m;
  cin >> m;
  vector<ll> v(mx);
  bool find = false;
  for (int i = 0; i < m; i++) {
    cin >> v[i];
    if (v[i] == i + 1) find = true;
  }
  cout << (find ? "YES" : "NO") << '\n';
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