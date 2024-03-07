#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count = 0, countAll = 0;
  char a = ' ';
  sort(S.begin(), S.end());
  for (int i = 1; i < S.size(); i++) {
    if (i - 1 == i) {
      for (int j = 0; j < S.size(); j++) {
        if (S.at(i) == S.at(j)) {
          count++;
        }
      }
      if (countAll < count) {
        countAll = count;
        a = S.at(i);
      }
      else if (countAll == count) {
        a = min(a, S.at(i));
      }
    }
  }
  cout << a << endl;
  return 0;
}