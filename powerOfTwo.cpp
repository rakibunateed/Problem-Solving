#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
bool powerOf2(ll x) { return x && !(x & (x - 1)); }
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  if (powerOf2(n))
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}