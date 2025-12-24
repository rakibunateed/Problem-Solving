#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, x;
  string s;
  cin >> n >> x >> s;
  if (s.find('#') == string::npos) {
    cout << 1 << "\n";
  } else {
    ll left = x - 1;
    ll right = n - x;
    cout << min(left, right) + 1 << "\n";
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