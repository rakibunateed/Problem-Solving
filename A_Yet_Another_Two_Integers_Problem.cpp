#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll a, b;
  cin >> a >> b;
  ll difference = abs(a - b);
  ll count = (difference + 9) / 10;
  cout << count << endl;
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