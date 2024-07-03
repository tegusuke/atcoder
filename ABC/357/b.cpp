#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int A = 0, a = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) < 'a') {
      A++;
    }
    else {
      a++;
    }
  }
  if (A > a) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }

  cout << s << endl;
  return 0;
}