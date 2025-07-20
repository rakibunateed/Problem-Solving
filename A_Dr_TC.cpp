#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s;
  cin >> n >> s;
  ll cnt = 0;
  for (ll i = 0; i < s.length(); i++)
    if (s[i] == '1') cnt++;
  cout << cnt * (n - 2) + n << '\n';
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