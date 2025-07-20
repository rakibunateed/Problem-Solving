#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> s(n);
  for (ll i = 0; i < n; i++) {
    cin >> s[i];
  }
  ll max1 = -1, max2 = -1;
  for (ll i = 0; i < n; i++) {
    if (s[i] > max1) {
      max2 = max1;
      max1 = s[i];
    } else if (s[i] > max2) {
      max2 = s[i];
    }
  }
  for (ll i = 0; i < n; i++) {
    if (s[i] == max1) {
      cout << s[i] - max2 << " ";
    } else {
      cout << s[i] - max1 << " ";
    }
  }
  cout << "\n";
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