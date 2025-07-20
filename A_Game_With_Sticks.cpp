#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  ll cnt = 0;
  ll big = max(n, m);
  for (int i = 0; i < big; i++) {
    if (n > 0 && m > 0) {
      n--;
      m--;
      cnt++;
    }
  }
  if (cnt % 2 == 0)
    cout << "Malvika\n";
  else
    cout << "Akshat\n";
  return 0;
}