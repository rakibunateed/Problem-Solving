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
  cin.ignore();
  getline(cin, s);
  set<char> st;
  for (ll i = 0; i < s.length(); i++) {
    if (isalpha(s[i])) st.insert(s[i]);
  }
  cout << st.size() << '\n';
  return 0;
}