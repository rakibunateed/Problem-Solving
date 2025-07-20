#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
bool isVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  vector<string> v;
  int cnt[] = {5, 7, 5};
  for (ll i = 0; i < 3; i++) {
    string s;
    char c;
    cin >> c;
    getline(cin, s);
    s = c + s;
    v.push_back(s);
  }
  for (ll i = 0; i < 3; i++) {
    ll count = 0;
    for (auto u : v[i]) {
      if (isVowel(u)) {
        count++;
      }
    }
    if (count != cnt[i]) return cout << "NO\n", 0;
  }
  cout << "YES\n";
  return 0;
}