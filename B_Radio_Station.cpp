#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  map<string, string> mp;
  for (ll i = 0; i < n; i++) {
    string name, ip;
    cin >> name >> ip;
    mp[ip] = name;
  }
  for (ll i = 0; i < m; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    s2.pop_back();
    cout << s1 << " " << s2 << "; #" << mp[s2] << '\n';
  }
  return 0;
}