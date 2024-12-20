#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll s, n;
  cin >> s >> n;
  vector<pi> dragons(n);
  for (int i = 0; i < n; ++i) {
    cin >> dragons[i].first >> dragons[i].second;
  }
  sort(dragons.begin(), dragons.end());
  for (int i = 0; i < n; i++) {
    if (s > dragons[i].first) {
      s += dragons[i].second;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}