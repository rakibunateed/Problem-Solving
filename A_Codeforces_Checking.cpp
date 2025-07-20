#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  char ch;
  cin >> ch;
  cout << (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' ||
                   ch == 'o' || ch == 'r' || ch == 'c' || ch == 'e' || ch == 's'
               ? "YES\n"
               : "NO\n");
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