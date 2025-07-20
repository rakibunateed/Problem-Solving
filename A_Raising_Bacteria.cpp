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
  vector<ll> v;
  for (ll i = 2; i < 100; i++) {
    if (n % i == 1) {
      v.push_back(i);
    }
  }
  for (auto u : v) {
    cout << u << " ";
  }

  return 0;
}