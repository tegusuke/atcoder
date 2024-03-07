#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != s.at(i + 1)) {
      if (i == 0) {
        if (s.at(0) == s.at(2)) {
          cout << i + 2 << endl;
          break;
        }
        else {
          cout << i + 1 << endl;
          break;
        }
      }
      cout << i + 2 << endl;
      break;
    }
  }
  return 0;
}