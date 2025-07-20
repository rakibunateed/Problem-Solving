#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void bfs(ll start, vector<vector<ll>>& adj, vector<bool>& visited) {
  queue<ll> q;
  q.push(start);
  visited[start] = true;
  while (!q.empty()) {
    ll node = q.front();
    q.pop();
    cout << node << " ";
    for (ll neighbor : adj[node]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}
int main() {
  ll n = 5;
  vector<vector<ll>> adj(n);
  adj[0] = {1, 2};
  adj[1] = {0};
  adj[2] = {0, 3, 4};
  adj[3] = {2};
  adj[4] = {3};
  vector<bool> visitedBFS(n, false);
  cout << "BFS traversal: ";
  bfs(0, adj, visitedBFS);
  cout << '\n';
  return 0;
}