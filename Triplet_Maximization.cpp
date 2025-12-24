#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  long long X, Y;
  cin >> X >> Y;
  long long T = (X + Y) / 3;  // number of triples
  long long m = min(Y, T);    // triples that can include at least one '2'
  long long ans = T + m;
  cout << ans << '\n';
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