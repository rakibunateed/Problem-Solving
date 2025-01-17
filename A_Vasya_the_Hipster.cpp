#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a, b, count = 0;
  cin >> a >> b;
  ll pair = min(a, b);
  ll wear = max(a, b) - pair;
  while (wear >= 2) {
    count++;
    wear -= 2;
  }
  cout << pair << " " << count << '\n';
  return 0;
}