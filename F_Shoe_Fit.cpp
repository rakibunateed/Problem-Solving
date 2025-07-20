#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a, b, c;
  cin >> a >> b >> c;
  if ((a == 0 || b == 0 || c == 0) && (a == 1 || b == 1 || c == 1))
    cout << "1\n";
  else
    cout << "0\n";
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