#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, t;
  cin >> n >> t;
  for (ll i = 1;; i++) {
    string s = "", s1 = "";
    s += i;
    if (s.length() == n) {
      ll m = stoll(s);
      ll k = m % t;
      ll d = m / t;
      s1 += d;
      if (k == 0) {
        if (s1.length() == n) {
          cout << i << '\n';
          break;
        }
      }
    }
  }

  return 0;
}