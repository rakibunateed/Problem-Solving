#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  if (!(cin >> tc)) return 0;
  while (tc--) {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> S(n), T(n);
    for (int i = 0; i < n; ++i) cin >> S[i];
    for (int i = 0; i < n; ++i) cin >> T[i];

    unordered_map<ll, long long> cntS, cntT;
    cntS.reserve(n * 2);
    cntT.reserve(n * 2);

    for (ll x : S) {
      ll r = x % k;
      cntS[r]++;
    }
    for (ll x : T) {
      ll r = x % k;
      cntT[r]++;
    }

    bool ok = true;
    unordered_set<ll> seen;
    seen.reserve(cntS.size() + cntT.size());

    // iterate over all residues present
    for (auto &p : cntS) {
      ll r = p.first;
      if (seen.count(r)) continue;
      ll other = (k - r) % k;
      if (r == other) {
        if (cntS[r] != cntT[r]) {
          ok = false;
          break;
        }
        seen.insert(r);
      } else {
        long long ssum = cntS[r] + cntS[other];
        long long tsum = cntT[r] + cntT[other];
        if (ssum != tsum) {
          ok = false;
          break;
        }
        seen.insert(r);
        seen.insert(other);
      }
    }
    // There might be residues present only in cntT but not cntS
    if (ok) {
      for (auto &p : cntT) {
        ll r = p.first;
        if (seen.count(r)) continue;
        ll other = (k - r) % k;
        if (r == other) {
          if (cntS[r] != cntT[r]) {
            ok = false;
            break;
          }
          seen.insert(r);
        } else {
          long long ssum = cntS[r] + cntS[other];
          long long tsum = cntT[r] + cntT[other];
          if (ssum != tsum) {
            ok = false;
            break;
          }
          seen.insert(r);
          seen.insert(other);
        }
      }
    }

    cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}
