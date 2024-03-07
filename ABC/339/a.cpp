#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = (s.size() - 1); i >= 0; i--) {
    if (s.at(i) == '.') {
      for (int j = i + 1; j < s.size(); j++) {
        cout << s.at(j);
      }
      cout << endl;
      break;
    }
  }
  return 0;
}