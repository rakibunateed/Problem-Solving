#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s;
  cin >> s;
  vector<ll> v;

  for (ll i = 0; i < s.length(); i++) {
    ll num = s[i] - '0';
    v.push_back(num);
  }
  cout << *min_element(v.begin(), v.end()) << '\n';
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