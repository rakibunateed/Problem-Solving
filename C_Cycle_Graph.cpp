#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  if (m != n) {
    cout << "No\n";
    return 0;
  }
  vector<vector<ll>> adj(n + 1);
  vector<ll> deg(n + 1, 0);
  for (ll i = 0, u, v; i < m; i++) {
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    deg[u]++;
    deg[v]++;
  }
  for (ll i = 1; i <= n; i++) {
    if (deg[i] != 2) {
      cout << "No\n";
      return 0;
    }
  }
  vector<bool> vis(n + 1, false);
  queue<ll> q;
  q.push(1);
  vis[1] = true;
  ll seen = 1;
  while (!q.empty()) {
    ll u = q.front();
    q.pop();
    for (ll v : adj[u]) {
      if (!vis[v]) {
        vis[v] = true;
        seen++;
        q.push(v);
      }
    }
  }
  cout << (seen == n ? "Yes\n" : "No\n");
  return 0;
}