#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  string s;
  cin >> n >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  set<char> st;
  for (ll i = 0; i < s.length(); i++) {
    st.insert(s[i]);
  }
  cout << (st.size() == 26 ? "YES\n" : "NO\n");
  return 0;
}