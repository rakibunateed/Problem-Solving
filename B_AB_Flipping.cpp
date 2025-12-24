#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  string s;
  cin >> n >> s;
  vector<ll> v;
  ll c = 0;
  for (ll i = 0; i < n - 1; i++) {
    if (s[i] == 'A' and s[i + 1] == 'B') {
      swap(s[i], s[i + 1]);
      c++;
    } else
      v.push_back(i);
  }

  for (ll i = 0; i < v.size(); i++) {
    if (s[v[i]] == 'A' and s[v[i] + 1] == 'B') {
      swap(s[v[i]], s[v[i] + 1]);
      c++;
    }
  }
  cout << c << '\n';
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