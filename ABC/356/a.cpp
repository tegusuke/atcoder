#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  
  vector<int> A(n);
  int i = 0;
  while (i < n) {
    if (i == l - 1) {
      for (int j = r; j >= l; j--) {
        A.at(i) = j;
        i++;
      }
    }
    else {
      A.at(i) = i + 1;
      i++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << A.at(i) << " ";
  }
  cout << endl;
  return 0;
}