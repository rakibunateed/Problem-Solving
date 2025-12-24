#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;

// // lengthOfLongestSubstringSlidingWindow
// int lengthOfLongestSubstringSlidingWindow(string s) {
//   unordered_set<char> seen;
//   int maxLength = 0, left = 0;

//   for (int right = 0; right < s.size(); right++) {
//     while (seen.count(s[right])) {
//       seen.erase(s[left]);
//       left++;
//     }
//     seen.insert(s[right]);
//     maxLength = max(maxLength, right - left + 1);
//   }
//   return maxLength;
// }

// int lengthOfLongestSubstringSlidingWindow(string s) {
//   vector<int> freq(128, 0);
//   int maxLength = 0, left = 0;

//   for (int right = 0; right < s.size(); right++) {
//     freq[s[right]]++;

//     while (freq[s[right]] > 1) {
//       freq[s[left]]--;
//       left++;
//     }

//     maxLength = max(maxLength, right - left + 1);
//   }
//   return maxLength;
// }

string longestUniqueSubstring(string s) {
  vector<int> freq(128, 0);
  int left = 0, maxLength = 0;
  int startIndex = 0;  // to store where the longest substring begins

  for (int right = 0; right < s.size(); right++) {
    freq[s[right]]++;

    // If duplicate, shrink window from left
    while (freq[s[right]] > 1) {
      freq[s[left]]--;
      left++;
    }

    // Update max and starting index
    if (right - left + 1 > maxLength) {
      maxLength = right - left + 1;
      startIndex = left;
    }
  }

  // Return the substring itself
  return s.substr(startIndex, maxLength);
}
double findMaxAverageSlidingWindow(int k, vector<int>& nums) {
  int n = nums.size();
  if (k > n) return -1;  // invalid

  int sum = 0;

  for (int i = 0; i < k; i++) {
    sum += nums[i];
  }

  int maxSum = sum;

  for (int i = k; i < n; i++) {
    sum += nums[i];
    sum -= nums[i - k];
    maxSum = max(maxSum, sum);
  }

  return (maxSum);
}

int main() {
  int k = 5;
  vector<int> v = {2, 3, 1, 2, 4, 3};
  cout << findMaxAverageSlidingWindow(k, v);
}
