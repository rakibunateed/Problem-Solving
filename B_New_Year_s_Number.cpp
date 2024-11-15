#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll n;
  cin >> n;
  ll q = n / 2020;
  ll r = n % 2020;

  if (r <= q) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}