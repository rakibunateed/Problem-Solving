#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string result;
  string wub = "WUB";
  bool spaceNeeded = false;

  for (int i = 0; i < s.length();) {
    // Check if "WUB" starts at position i
    if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' &&
        s[i + 2] == 'B') {
      // Only add a space if needed (not at the beginning and no consecutive
      // spaces)
      if (!result.empty() && !spaceNeeded) {
        result += ' ';
        spaceNeeded = true;  // Indicate that we added a space
      }
      i += 3;  // Skip past "WUB"
    } else {
      // Add current character to result and reset spaceNeeded flag
      result += s[i];
      spaceNeeded = false;
      i++;
    }
  }
  cout << result << endl;

  return 0;
}
