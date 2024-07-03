#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A(m);
  for (int i = 0; i < m; i++) {
    cin >> A.at(i);
  }
  vector<vector<int>> X(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> X.at(i).at(j);
    }
  }

  bool ans = true;
  vector<int> S(m);
  int i = 0, j = 0;
  while (j < m) {
    while (i < n) {
      S.at(j) += X.at(i).at(j);
      i++;
    }
    j++;
  }
  for (int i = 0; i < m; i++) {
    if (S.at(i) < A.at(i)) {
      ans = false;
    }
  }

  if (ans) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}