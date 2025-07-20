#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  bool find = false;
  ll one = 0, zero = 0, three = 0, two = 0, five = 0, cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] == 0) {
      zero++;
    }
    if (v[i] == 1) {
      one++;
    }
    if (v[i] == 2) {
      two++;
    }
    if (v[i] == 3) {
      three++;
    }
    if (v[i] == 5) {
      five++;
    }

    if (zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1) {
      find = true;
      break;
    }
    cnt++;
  }
  if (find) {
    cout << cnt + 1 << '\n';
  } else {
    cout << "0\n";
  }
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