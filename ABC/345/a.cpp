#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ans = false;
  if (s.at(0) == '<' && s.at(s.size() - 1) == '>') {
    for (int i = 1; i < s.size() - 1;i++) {
      if (s.at(i) != '=') {
        break;
      } else {
        if (i == s.size() - 2) {
          ans = true;
        }
        continue;
      }
    }
  }
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}