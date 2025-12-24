#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, x, y;
  cin >> n >> x >> y;
  ll c = y / x;
  ll v = (n + c - 1) / c;
  cout << v << '\n';
  return 0;
}