// Prim's Algorithm

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main() {
  ll n = 5;
  vector<vector<pair<ll, ll>>> adj(n);

  adj[0].push_back({1, 1});
  adj[1].push_back({0, 1});

  adj[0].push_back({2, 3});
  adj[2].push_back({0, 3});

  adj[1].push_back({2, 4});
  adj[2].push_back({1, 4});

  adj[1].push_back({3, 2});
  adj[3].push_back({1, 2});

  adj[2].push_back({3, 5});
  adj[3].push_back({2, 5});

  adj[3].push_back({4, 7});
  adj[4].push_back({3, 7});

  vector<bool> visited(n, false);
  priority_queue<P, vector<P>, greater<P>> pq;

  ll totalWeight = 0;
  vector<tuple<ll, ll, ll>> mst;

  pq.push({0, 0});

  while (!pq.empty()) {
    auto [weight, u] = pq.top();
    pq.pop();

    if (visited[u]) continue;
    visited[u] = true;
    totalWeight += weight;

    for (auto [v, w] : adj[u]) {
      if (!visited[v]) {
        pq.push({w, v});
        mst.push_back({w, u, v});
      }
    }
  }

  cout << "Edges in MST:\n";
  for (auto [w, u, v] : mst) {
    if (visited[u] && visited[v])
      cout << u << " - " << v << " (weight " << w << ")\n";
  }
  cout << "Total weight of MST: " << totalWeight << endl;

  return 0;
}