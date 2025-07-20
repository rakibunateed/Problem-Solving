#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int t;
  cin >> t;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  vector<long long> prefix(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    prefix[i] = prefix[i - 1] + a[i - 1];
  }
  while (t--) {
    int n, k;
    long long x;
    cin >> n >> k >> x;

    long long S = prefix[n];

    long long res = 0;

    for (int l = 1; l <= n; ++l) {
      long long sum_l = prefix[n] - prefix[l - 1];
      if (sum_l >= x) {
        res += k;
      } else if (S > 0) {
        long long remaining = x - sum_l;
        long long m = (remaining + S - 1) / S;  // ceil(remaining / S)
        if (m < k) {
          res += (k - m);
        }
      }
    }
    cout << res << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}