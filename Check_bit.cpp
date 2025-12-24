#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
ll check_kth_bit(ll x, ll k) { return x & (1 << k); }
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, i;
  cin >> n >> i;
  if (check_kth_bit(n, i))
    cout << "true\n";
  else
    cout << "false\n";
  return 0;
}