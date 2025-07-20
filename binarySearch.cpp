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
  vector<ll> v = {2, 4, 6, 8, 10, 12, 14, 16};
  ll target = 16;
  ll result = binarySearch(v, 0, v.size() - 1, target);
  if (result != -1)
    cout << "Element found at index: " << result + 1 << '\n';
  else
    cout << "Element was not found in the array." << '\n';
  return 0;
}