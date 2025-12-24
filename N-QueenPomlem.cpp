#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int isSafe(vector<vector<ll>>& mat, ll row, ll col) {
  ll n = mat.size();
  ll i, j;
  for (i = 0; i < row; i++)
    if (mat[i][col]) return 0;
  for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    if (mat[i][j]) return 0;
  for (i = row - 1, j = col + 1; j < n && i >= 0; i--, j++)
    if (mat[i][j]) return 0;
  return 1;
}
void placeQueens(ll row, vector<vector<ll>>& mat, vector<vector<ll>>& result) {
  ll n = mat.size();
  if (row == n) {
    vector<ll> ans;
    for (ll i = 0; i < n; i++) {
      for (ll j = 0; j < n; j++) {
        if (mat[i][j]) {
          ans.push_back(j + 1);
        }
      }
    }
    result.push_back(ans);
    return;
  }
  for (ll i = 0; i < n; i++) {
    if (isSafe(mat, row, i)) {
      mat[row][i] = 1;
      placeQueens(row + 1, mat, result);
      mat[row][i] = 0;
    }
  }
}
vector<vector<ll>> nQueen(ll n) {
  vector<vector<ll>> mat(n, vector<ll>(n, 0));
  vector<vector<ll>> result;
  placeQueens(0, mat, result);
  return result;
}
int main() {
  ll n = 4;
  vector<vector<ll>> result = nQueen(n);
  for (auto& ans : result) {
    for (auto i : ans) {
      cout << i << " ";
    }
    cout << '\n';
  }
  return 0;
}