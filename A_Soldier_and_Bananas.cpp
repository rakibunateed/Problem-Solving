#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll k, n, w;
  cin >> k >> n >> w;
  ll total = 0;
  for (ll i = 1; i <= w; i++) total += (i * k);
  if (total > n) {
    ll need = total - n;
    cout << need << '\n';
  } else
    cout << "0" << '\n';
  return 0;
}