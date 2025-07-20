#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void merge(vector<ll>& v, ll l, ll m, ll r) {
  vector<ll> temp;
  ll i = l;
  ll j = m + 1;
  while (i <= m && j <= r) {
    if (v[i] <= v[j]) {
      temp.push_back(v[i]);
      i++;
    } else {
      temp.push_back(v[j]);
      j++;
    }
  }
  while (i <= m) {
    temp.push_back(v[i]);
    i++;
  }
  while (j <= r) {
    temp.push_back(v[j]);
    j++;
  }
  for (ll i = 0; i < temp.size(); i++) {
    v[i + l] = temp[i];
  }
}
void mergeSort(vector<ll>& v, ll l, ll r) {
  if (l == r) return;
  ll m = l + (r - l) / 2;
  mergeSort(v, l, m);
  mergeSort(v, m + 1, r);
  merge(v, l, m, r);
}
int main() {
  vector<ll> v = {6, 5, 12, 10, 9, 1};
  mergeSort(v, 0, v.size() - 1);
  cout << "Sorted array:\n";
  for (auto u : v) cout << u << " ";
  return 0;
}