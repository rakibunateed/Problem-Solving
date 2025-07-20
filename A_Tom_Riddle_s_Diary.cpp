#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  map<string, bool> m;
  for (ll i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (m[s] == 1)
      cout << "YES\n";
    else
      cout << "NO\n";

    m[s] = 1;
  }
  return 0;
}