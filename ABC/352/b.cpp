#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;

  int count = 0;
  bool finished = false;
  rep(i, s.size()) {
    rep(j, t.size()) {
      if (count == s.size()) {
        finished = true;
        break;
      }
      if (s.at(i) == t.at(j)) {
        count++;
        cout << j + 1 << " ";
      }
    }
    if (finished) {
      break;
    }
  }
  cout << endl;
  return 0;
}