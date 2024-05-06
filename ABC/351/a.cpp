#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(9), b(8);
  for (int i = 0; i < 9; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < 8; i++) {
    cin >> b.at(i);
  }

  int sumA = 0, sumB = 0;
  for (int i = 0; i < 9; i++) {
    sumA += a.at(i);
  }
  for (int i = 0; i < 8; i++) {
    sumB += b.at(i);
  }

  cout << (sumA - sumB) + 1 << endl;
  return 0;
}