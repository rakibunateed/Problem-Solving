#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a, b, count = 0, time = 0;
  cin >> a >> b;
  while (a > 0) {
    a--;
    count++;
    time++;
    if (b == count) {
      a++;
      count = 0;
    }
  }
  cout << time << '\n';
  return 0;
}