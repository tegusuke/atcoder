#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> q(n, vector<int>(n));
  vector<vector<int>> ans(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> q.at(i).at(j);
      if (q.at(i).at(j) == 1) {
        ans.at(i).push_back(j + 1);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < ans.at(i).size(); j++) {
      cout << ans.at(i).at(j) << " ";
    }
    cout << endl;
  }
  return 0;
}