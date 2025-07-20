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
  map<string, ll> m;
  for (ll i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (m[s] == 0) {
      cout << "OK\n";

    } else {
      cout << s << m[s] << '\n';
    }
    m[s]++;
  }
  return 0;
}