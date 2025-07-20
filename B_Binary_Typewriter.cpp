#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int transitions = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] != s[i + 1]) {
        transitions++;
      }
    }

    int min_cost = n + max(0, transitions - 2);
    cout << min_cost << '\n';
  }

  return 0;
}
