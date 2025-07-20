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
  if (n > 2 && n % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}