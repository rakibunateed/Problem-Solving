#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll b, p, f, h, c;
  cin >> b >> p >> f >> h >> c;
  ll mxPrice, mnPrice, mxPatti, mnPatti;
  if (h > c) {
    mxPrice = h;
    mxPatti = p;
    mnPrice = c;
    mnPatti = f;
  } else {
    mxPrice = c;
    mxPatti = f;
    mnPrice = h;
    mnPatti = p;
  }
  ll numBurger = b / 2;
  ll profit = 0;
  if (mxPatti >= numBurger) {
        profit += (mxPrice * numBurger);
    numBurger = 0;
  } else {
    numBurger -= mxPatti;
    profit += (mxPatti * mxPrice);
  }
  if (mnPatti >= numBurger) {
    profit += (mnPrice * numBurger);
  } else {
    profit += (mnPatti * mnPrice);
  }
  cout << profit << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}