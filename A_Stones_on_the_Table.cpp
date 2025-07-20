#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, cnt = 0;
  string s;
  cin >> n >> s;
  for (ll i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}