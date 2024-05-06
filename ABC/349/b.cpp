#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ans = false;
  for (int i = 0; i < s.size(); i++) {
    int count = 0;
    for (int j = 0; j < s.size(); j++) {
      if (s.at(i) == s.at(j)) {
        count++;
      }
    }
    if (count != 2 || count != 0) {
      break;
    }
    else {
      ans = true;
    }
  }
  if (ans) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}