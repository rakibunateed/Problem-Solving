#include <iostream>
#include <vector>

using namespace std;

// Function to generate a perfect permutation
vector<int> generatePermutation(int n) {
  if (n == 1) return {-1};  // No valid permutation for n=1

  vector<int> p(n);
  for (int i = 0; i < n; i += 2) {
    if (i + 1 < n) {
      p[i] = i + 2;  // Swap adjacent numbers
      p[i + 1] = i + 1;
    } else {
      p[i] = i + 1;  // For odd n, handle the last number
    }
  }
  return p;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> result = generatePermutation(n);
    for (int num : result) cout << num << " ";
    cout << endl;
  }
  return 0;
}
