#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t)) return 0;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n + 1), pref(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];
      pref[i] = pref[i - 1] + a[i];
    }

    bool found = false;
    int ansL = 0, ansR = 0;

    // l must be at least 1 and at most n-2 (so r can be at least l+1 and at
    // most n-1)
    for (int l = 1; l <= n - 2 && !found; ++l) {
      for (int r = l + 1; r <= n - 1; ++r) {
        long long S1 = pref[l];
        long long S2 = pref[r] - pref[l];
        long long S3 = pref[n] - pref[r];

        int s1 = (int)((S1 % 3 + 3) % 3);
        int s2 = (int)((S2 % 3 + 3) % 3);
        int s3 = (int)((S3 % 3 + 3) % 3);

        // all same
        if (s1 == s2 && s2 == s3) {
          ansL = l;
          ansR = r;
          found = true;
          break;
        }
        // all different
        unordered_set<int> st = {s1, s2, s3};
        if ((int)st.size() == 3) {
          ansL = l;
          ansR = r;
          found = true;
          break;
        }
      }
    }

    if (found)
      cout << ansL << " " << ansR << '\n';
    else
      cout << "0 0\n";
  }

  return 0;
}
