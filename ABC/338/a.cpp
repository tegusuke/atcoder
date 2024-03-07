#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  char head = S.at(0);
  sort(S.begin(), S.end());
  if (S.size() == 1) {
    if (S.at(0) < 'a') {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  else if (head > 'Z' || S.at(1) < 'a') {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
  return 0;
}