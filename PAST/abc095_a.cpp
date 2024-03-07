#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int price = 700;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'o') {
      price += 100;
    }
    else if (S.at(i) == 'x') {
      continue;
    }
  }
  cout << price << endl;
  return 0;
}