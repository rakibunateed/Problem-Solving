#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll N;
  cin >> N;
  ll best_odd = 0, best_even = 0;
  for (ll i = 0; i < N; ++i) {
    ll x;
    cin >> x;
    if (x % 2 == 0) {
      best_even = max(best_even, best_odd + 1);
    } else {
      best_odd = max(best_odd, best_even + 1);
    }
  }
  cout << max(best_odd, best_even) << '\n';
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