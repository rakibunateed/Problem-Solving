#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> build_sa(string &s) {
  ll n = s.size();
  vector<ll> sa(n), rank(n), tmp(n);
  iota(sa.begin(), sa.end(), 0);
  for (ll i = 0; i < n; ++i) rank[i] = s[i];
  for (ll len = 1;; len <<= 1) {
    auto cmp = [&](ll a, ll b) {
      if (rank[a] != rank[b]) return rank[a] < rank[b];
      ll ra = (a + len < n) ? rank[a + len] : -1;
      ll rb = (b + len < n) ? rank[b + len] : -1;
      return ra < rb;
    };
    sort(sa.begin(), sa.end(), cmp);
    tmp[sa[0]] = 0;
    for (ll i = 1; i < n; ++i)
      tmp[sa[i]] = tmp[sa[i - 1]] + cmp(sa[i - 1], sa[i]);
    rank = tmp;
    if (rank[sa[n - 1]] == n - 1) break;
  }
  return sa;
}
vector<ll> build_lcp(string &s, vector<ll> &sa) {
  ll n = s.size(), h = 0;
  vector<ll> rank(n), lcp(n);
  for (ll i = 0; i < n; ++i) rank[sa[i]] = i;
  for (ll i = 0; i < n; ++i) {
    if (rank[i] == 0) continue;
    ll j = sa[rank[i] - 1];
    while (i + h < n && j + h < n && s[i + h] == s[j + h]) h++;
    lcp[rank[i]] = h;
    if (h > 0) h--;
  }
  return lcp;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  ll n = s.size();
  auto sa = build_sa(s);
  auto lcp = build_lcp(s, sa);
  ll total = n * (n + 1) / 2;
  for (ll i = 1; i < n; ++i) total -= lcp[i];
  cout << total << '\n';
  return 0;
}