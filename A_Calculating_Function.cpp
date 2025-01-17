#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  if (n & 1) {
    cout << -(n + 1) / 2 << '\n';
  } else {
    cout << n / 2 << '\n';
  }
  return 0;
}