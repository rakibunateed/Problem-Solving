#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string str;
  cin >> n >> str;
  ll a = 0, b = 0, s = 0;
  for (ll i = 0; i < n; i++) {
    if (str[i] == 'A')
      a++;
    else if (str[i] == 'B')
      b++;
    else
      s++;
  }
  if (a != 0 && b != 0)
    cout << 1 << "\n";
  else if (a == 0 && b == 0)
    cout << 2 << "\n";
  else if (a != 0 && b == 0)
    cout << a << "\n";
  else
    cout << b << "\n";
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