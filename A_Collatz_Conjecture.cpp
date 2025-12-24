#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int k, x;
    cin >> k >> x;
    set<int> cur;
    cur.insert(x);
    for (int i = 0; i < k; i++) {
      set<int> nxt;
      for (int val : cur) {
        nxt.insert(val * 2);
        if ((val - 1) % 3 == 0) {
          int p = (val - 1) / 3;
          if (p % 2 == 1) nxt.insert(p);
        }
      }
      cur = nxt;
    }
    cout << *cur.begin() << "\n";
  }
  return 0;
}