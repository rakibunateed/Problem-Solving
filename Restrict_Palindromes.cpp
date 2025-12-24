#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string pat = "abcde";
  ll n;
  cin >> n;
  string s;
  s.reserve(n);
  for (ll i = 0; i < n; ++i) s.push_back(pat[i % 5]);
  cout << s << '\n';
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