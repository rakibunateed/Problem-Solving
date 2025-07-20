#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bubbleSort(vector<ll>& v, ll n) {
  for (ll i = 0; i < n - 1; i++) {
    for (ll j = 0; j < n - i - 1; j++) {
      if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
    }
  }
}
int main() {
  vector<ll> v = {6, 5, 12, 10, 9, 1};
  bubbleSort(v, v.size());
  cout << "Sorted array:\n";
  for (auto u : v) cout << u << " ";
  return 0;
}