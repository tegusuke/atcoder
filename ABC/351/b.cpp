#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char>> a(n, vector<char>(n)), b(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b.at(i).at(j);
    }
  }

  int ansI = 0, ansJ = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a.at(i).at(j) != b.at(i).at(j)) {
        ansI = i;
        ansJ = j;
      }
    }
  }

  cout << ansI + 1 << " " << ansJ + 1<< endl;
  return 0;
}