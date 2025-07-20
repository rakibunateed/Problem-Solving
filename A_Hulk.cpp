#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; ++i) {
    if (i % 2 == 1)
      cout << "I hate";
    else
      cout << "I love";
    if (i != n) cout << " that ";
  }
  cout << " it" << '\n';
  return 0;
}