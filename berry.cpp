#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, k, count1 = 0, count2 = 0;
  cin >> n >> k;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'O') {
      count1++;
      if (count1 == k) {
        count2++;
        count1 = 0;
      }
    } else {
      count1 = 0;
    }
  }
  cout << count2 << endl;
  return 0;
}