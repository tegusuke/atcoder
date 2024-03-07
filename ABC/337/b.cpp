#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  string s = S;
  sort(s.begin(), s.end());
  if (S == s) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}