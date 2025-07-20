#include <algorithm>
#include <iostream>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_dash = 0, count_underscore = 0;

    // Count occurrences of '-' and '_'
    for (char c : s) {
      if (c == '-')
        count_dash++;
      else
        count_underscore++;
    }

    // Maximum number of "-_-" subsequences
    long long result = (1LL * (count_dash / 2) * count_underscore *
                        (count_dash - count_dash / 2));

    cout << result << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
