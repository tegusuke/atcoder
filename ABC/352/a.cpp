#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  if (x <= y) {
    if (z < x) {
      cout << "No" << endl;
    }
    else if (x < z && z < y) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  else {
    if (z < y) {
      cout << "No" << endl;
    }
    else if (y < z && z < x) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}