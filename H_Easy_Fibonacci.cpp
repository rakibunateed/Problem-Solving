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
  ll a = 0, b = 1;
  cout << "0 1 ";
  for (ll i = 3; i <= n; i++) {
    ll temp;
    temp = a + b;
    cout << temp << " ";
    a = b;
    b = temp;
  }
  cout << '\n';
  return 0;
}