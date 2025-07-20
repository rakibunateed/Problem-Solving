#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    // To store the resulting sequence
    vector<int> result(n);

    // Use a stack to simulate the filling of the sequence
    stack<int> st;

    // Assign values from 1 to n
    int current = 1;

    // Traverse the string s
    for (int i = 0; i < n; ++i) {
      st.push(current++);

      // If we reach the end or a '<' is encountered, we need to finalize the
      // sequence for this part
      if (i == n - 1 || s[i] == '<') {
        while (!st.empty()) {
          result[i - st.size() + 1] = st.top();
          st.pop();
        }
      }
    }

    // Output the result
    for (int i = 0; i < n; ++i) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
