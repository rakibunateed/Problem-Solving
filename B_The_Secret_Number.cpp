#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  if (!(cin >> t)) return 0;
  while (t--) {
    unsigned long long n;
    cin >> n;
    set<unsigned long long> answers;

    // Use __int128 for safe intermediate arithmetic
    __int128 pow10 = 10;  // 10^1
    for (int m = 1; m <= 19;
         ++m) {  // 19 iterations more than enough (10^18 fits)
      __int128 denom = pow10 + 1;  // 1 + 10^m
      if (denom > (__int128)n) break;
      if ((__int128)n % denom == 0) {
        unsigned long long x = (unsigned long long)((__int128)n / denom);
        if (x > 0) answers.insert(x);
      }
      pow10 *= 10;
    }

    if (answers.empty()) {
      cout << 0 << '\n';
    } else {
      cout << answers.size();
      for (auto v : answers) cout << " " << v;
      cout << '\n';
    }
  }
  return 0;
}
