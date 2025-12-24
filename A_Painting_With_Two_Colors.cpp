#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, a, b;
  cin >> n >> a >> b;
  if ((n - b) % 2 == 1)
    cout << "NO\n";
  else {
    if (a <= b || (n - a) % 2 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
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