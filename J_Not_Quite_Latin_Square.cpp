#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  char v[3][3];
  ll a = 0, b = 0, c = 0;
  for (ll i = 0; i < 3; i++) {
    for (ll j = 0; j < 3; j++) cin >> v[i][j];
  }
  for (ll i = 0; i < 3; i++) {
    for (ll j = 0; j < 3; j++) {
      if (v[i][j] == 'A') a++;
      if (v[i][j] == 'B') b++;
      if (v[i][j] == 'C') c++;
    }
  }
  if (a != 3)
    cout << "A\n";
  else if (b != 3)
    cout << "B\n";
  else
    cout << "C\n";
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