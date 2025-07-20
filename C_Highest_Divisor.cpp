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
  for (ll i = 10; i >= 1; i--) {
    if (n % i == 0) {
      cout << i << '\n';
      break;
    }
  }
  return 0;
}