#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s;
  cin >> s;
  ll sum1 = 0, sum2 = 0;
  for (ll i = 0; i < 3; i++) sum1 += s[i];
  for (ll i = 3; i < 6; i++) sum2 += s[i];
  cout << (sum1 == sum2 ? "YES\n" : "NO\n");
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