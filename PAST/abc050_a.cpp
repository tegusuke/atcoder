#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  char op;
  int ans = 0;
  cin >> A >> op >> B;
  if (op == '+') {
    ans = A + B;
  }
  else {
    ans = A - B;
  }
  cout << ans << endl;
  return 0;
}