#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, ans;
  cin >> s;
  bool del = false;
  int barCount = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '|') {
      if (barCount != 0) {
        del = false;
        continue;
      }
      else {
        barCount++;
        del = true;
      }
    }
    if (del) {
      continue;
    }
    ans.push_back(s.at(i));
  }
  cout << ans << endl;
  return 0;
}