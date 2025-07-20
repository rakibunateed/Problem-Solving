#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll partition(vector<ll>& v, ll l, ll r) {
  ll idx = l - 1, pivot = v[r];
  for (ll j = l; j < r; j++) {
    if (v[j] <= pivot) {
      idx++;
      swap(v[j], v[idx]);
    }
  }
  idx++;
  swap(v[r], v[idx]);
  return idx;
}
void quickSort(vector<ll>& v, ll l, ll r) {
  if (l < r) {
    ll pivIdx = partition(v, l, r);
    quickSort(v, l, pivIdx - 1);
    quickSort(v, pivIdx + 1, r);
  }
}
int main() {
  vector<ll> v = {6, 5, 12, 10, 9, 1};
  quickSort(v, 0, v.size() - 1);
  cout << "Sorted array:\n";
  for (auto u : v) cout << u << " ";
  return 0;
}