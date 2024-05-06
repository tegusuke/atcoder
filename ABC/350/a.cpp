#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool ans = false;
  if (s.at(3) == '0' || s.at(3) == '1' || s.at(3) == '2') {
    if (s.at(4) == '0' || s.at(4) == '1' || s.at(4) == '2' || s.at(4) == '3' || s.at(4) == '4' || s.at(4) == '5' || s.at(4) == '6' || s.at(4) == '7' || s.at(4) == '8' || s.at(4) == '9') {
      if (s.at(5) == '0' || s.at(5) == '1' || s.at(5) == '2' || s.at(5) == '3' || s.at(5) == '4' || s.at(5) == '5' || s.at(5) == '6' || s.at(5) == '7' || s.at(5) == '8' || s.at(5) == '9') {
          ans = true;
      }
    }
  }
  if (s.at(3) == '3') {
    if (s.at(4) == '0' || s.at(4) == '1' || s.at(4) == '2' || s.at(4) == '3' || s.at(4) == '4') {
      if (s.at(5) == '0' || s.at(5) == '1' || s.at(5) == '2' || s.at(5) == '3' || s.at(5) == '4' || s.at(5) == '5' || s.at(5) == '6' || s.at(5) == '7' || s.at(5) == '8' || s.at(5) == '9') {
          ans = true;
      }
    }
  }
  if (s == "ABC316" || s == "ABC000") {
    ans = false;
  }

  if (ans) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}