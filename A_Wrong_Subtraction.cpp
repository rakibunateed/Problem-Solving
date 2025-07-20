#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  ll temp = n, find;
  for (ll i = 0; i < k; i++) {
    find = temp % 10;
    if (find == 0) temp = temp / 10;
    if (find >= 1) temp--;
  }
  cout << temp << '\n';
  return 0;
}