#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll a, b, c;
  cin >> a >> b >> c;
  if (c & 1) {
    a += (c / 2) + 1;
    b += (c / 2);
  } else {
    a += (c / 2);
    b += (c / 2);
  }
  if (b >= a)
    cout << "Second\n";
  else
    cout << "First\n";
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