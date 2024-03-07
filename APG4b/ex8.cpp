#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, n;
  cin >> p;
  
  if (p == 1) {
    cin >> price >> n;
    cout << (price * n) << endl;
  }
  if (p == 2) {
    string text;
    cin >> text >> price >> n;
    cout << text << "!\n" << (price * n) << endl;
  }
  return 0;
}