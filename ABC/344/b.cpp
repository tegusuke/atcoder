#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A;
  int i = 0;
  while (true) {
    int a;
    cin >> a;
    A.push_back(a);
    if (a == 0) {
      break;
    }
  }
  for (int i = A.size() - 1; i >= 0; i--) {
    cout << A.at(i) << endl;
  }
  return 0;
}