#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  set<char> ch;
  for (ll i = 0; i < s.length(); i++) ch.insert(s[i]);
  if (ch.size() & 1)
    cout << "IGNORE HIM!\n";
  else
    cout << "CHAT WITH HER!\n";
  return 0;
}