#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, h, width = 0;
  cin >> n >> h;
  vi vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }
  for (ll i = 0; i < n; i++) {
    if (vec[i] <= h) {
      width += 1;
    } else {
      width += 2;
    }
  }
  cout << width << '\n';
  return 0;
}