#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  if (n == 1) {
    cout << -1 << '\n';
    return;
  }
  if (n % 2 == 0) {
    for (ll i = 0; i < n / 2; i++) cout << 1 << ' ';
    for (ll i = 0; i < n / 2; i++) cout << -1 << ' ';
    cout << '\n';
  } else {
    for (ll i = 0; i < (n - 3) / 2; i++) {
      cout << 1 << ' ' << -1 << ' ';
    }
    cout << 1 << ' ' << 1 << ' ' << -2 << '\n';
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll T;
  cin >> T;
  while (T--) solution();
  return 0;
}