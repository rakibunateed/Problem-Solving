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
  vector<ll> lucky = {4,   7,   44,  47,  74,  77,  444,
                      447, 474, 477, 744, 747, 774, 777};
  for (ll i = 0; i < lucky.size(); i++) {
    if (n % lucky[i] == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}