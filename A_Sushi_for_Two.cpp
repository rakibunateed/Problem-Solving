#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sushi(n);
  for (int i = 0; i < n; ++i) {
    cin >> sushi[i];
  }

  int max_length = 0;
  int count_tuna = 0, count_eel = 0;

  // Variables to track the current segment
  int prev_type = sushi[0];
  int curr_length = 1;
  vector<int> segments;  // To store lengths of consecutive blocks

  // Divide the sushi into blocks of consecutive types
  for (int i = 1; i < n; ++i) {
    if (sushi[i] == prev_type) {
      curr_length++;
    } else {
      segments.push_back(curr_length);
      prev_type = sushi[i];
      curr_length = 1;
    }
  }
  segments.push_back(curr_length);  // Push the last block

  // Find the maximum valid segment
  for (size_t i = 0; i < segments.size() - 1; ++i) {
    max_length = max(max_length, 2 * min(segments[i], segments[i + 1]));
  }

  cout << max_length << endl;
  return 0;
}
