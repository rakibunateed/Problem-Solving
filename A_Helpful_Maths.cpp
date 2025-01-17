#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s, number;
  cin >> s;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] != '+') {
      number += s[i];
    }
  }
  sort(number.begin(), number.end());
  string sortedNumber;
  for (ll i = 0; i < number.length(); i++) {
    sortedNumber += number[i];
    if (i < number.length() - 1) {
      sortedNumber += "+";
    }
  }
  cout << sortedNumber << '\n';
  return 0;
}