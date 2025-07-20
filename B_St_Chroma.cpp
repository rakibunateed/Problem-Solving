#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, k;
  cin >> n >> k;
  ll m;
  for (ll i = 0; i <= n - 1; i++) {
    if (i == k) {
      m = i;
      continue;
    }
    cout << i << " ";
  }
  if (k != n) {
    cout << m;
  }
  cout << '\n';
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