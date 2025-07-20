#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) cin >> l[i];
    for (int i = 0; i < n; ++i) cin >> r[i];

    int total_left = accumulate(l.begin(), l.end(), 0);

    int usable_colors = 0;
    for (int i = 0; i < n; ++i) {
      if (l[i] > 0 && r[i] > 0) {
        ++usable_colors;
      }
    }

    if (usable_colors >= k) {
      // We can form k distinct matching pairs
      cout << total_left + k << '\n';
    } else {
      // Not enough matching color pairs, take all gloves
      int total_right = accumulate(r.begin(), r.end(), 0);
      cout << total_left + total_right << '\n';
    }
  }

  return 0;
}
