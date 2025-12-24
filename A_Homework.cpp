#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string a;
  cin >> n >> a;
  ll m;
  string b, c;
  cin >> m >> b >> c;
  for (ll i = 0; i < b.length(); i++) {
    if (c[i] == 'V') {
      a = b[i] + a;
    } else {
      a = a + b[i];
    }
  }
  cout << a << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}