#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n * 2 + 1; i++) {
    if (i % 2 == 0) {
      cout << "1";
    }
    else {
      cout << "0";
    }
  }
  cout << endl;
  return 0;
}