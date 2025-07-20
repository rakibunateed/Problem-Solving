#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  ll a[100][100];
  ll s1 = 0, s2 = 0, s3 = 0;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
    s1 += a[i][0];
    s2 += a[i][1];
    s3 += a[i][2];
  }
  if (s1 == 0 && s2 == 0 && s3 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}