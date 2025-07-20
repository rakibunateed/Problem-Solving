#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  char k;
  string s;
  cin >> n >> k >> s;
  string result;
  bool flag = false;
  for (char ch : s) {
    if (!flag && k > ch) {
      result += k;
      flag = true;
    }
    result += ch;
  }
  if (!flag) result += k;
  cout << result << '\n';
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