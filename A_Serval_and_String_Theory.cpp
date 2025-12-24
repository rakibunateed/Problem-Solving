#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n, k;
  string s;
  cin >> n >> k >> s;
  set<char> st(s.begin(), s.end());
  if (st.size() == 1) {
    cout << "NO\n";
    return;
  }
  string r = s;
  reverse(r.begin(), r.end());
  if (k == 0) {
    if (s < r) {
      cout << "YES\n";
      return;
    } else {
      cout << "NO\n";
      return;
    }
  } else
    cout << "YES\n";
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