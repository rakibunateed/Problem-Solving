#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution() {
  ll n;
  cin >> n;
  if (n == 1) {
    cout << "-1\n";
    return;
  }
  if (n % 2 == 0) {
    cout << "-1\n";
  } else {
    cout << n << " ";
    for (ll i = 1; i <= n - 1; i++) {
      cout << i << " ";
    }
    cout << '\n';
  }
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