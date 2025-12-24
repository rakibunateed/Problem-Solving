#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m;
  string s;
  cin >> n >> m >> s;
  ll a = count(s.begin(), s.end(), '1');
  ll b = m - a;
  ll r = n - m;

  if (n % 2 == 1) {
    cout << "No\n";
    return;
  }
  ll target = n / 2;
  bool alice_can = (a <= target && target <= a + r);
  bool bob_can = (b <= target && target <= b + r);

  if (alice_can && bob_can)
    cout << "Yes\n";
  else
    cout << "No\n";
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