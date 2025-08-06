#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll binarySearch(vector<ll>& v, ll low, ll high, ll target) {
  if (low > high) return -1;
  ll mid = low + (high - low) / 2;
  if (v[mid] == target)
    return mid;
  else if (v[mid] > target)
    return binarySearch(v, low, mid - 1, target);
  else
    return binarySearch(v, mid + 1, high, target);
}
int main() {
  cout << 2 % 1;

  return 0;
}