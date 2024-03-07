#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  bool goodInteger = false;
  
  if (N.at(0) == N.at(1) && N.at(1) == N.at(2)) {
    goodInteger = true;
  }
  else if (N.at(1) == N.at(2) && N.at(2) == N.at(3)) {
    goodInteger = true;
  }

  if (goodInteger) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}