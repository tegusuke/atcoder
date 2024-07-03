#include <bits/stdc++.h>
using namespace std;

int main() {
  int h;
  cin >> h;

  double i = 0;
  int p = 0;
  while (true) {
    p += pow(2, i);
    if (h < p) {
      break;
    }
    i++;
  }

  cout << i + 1 << endl;
  return 0;
}