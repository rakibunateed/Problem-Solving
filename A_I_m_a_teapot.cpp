#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  string s;
  cin >> n >> s;
  if (s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}