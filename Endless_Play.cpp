#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll x, h;
  cin >> x >> h;
  ll hr = (x - 4) * 24 + h;
  cout << hr << '\n';
  return 0;
}