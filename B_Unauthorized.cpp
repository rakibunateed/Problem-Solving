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
  bool find = false;
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "login") {
      find = true;
      continue;
    }
    if (s == "logout") {
      find = false;
      continue;
    }
    if (s == "public") {
      continue;
    }
    if (find) {
      continue;
    } else
      cnt++;
  }
  cout << cnt << '\n';
  return 0;
}