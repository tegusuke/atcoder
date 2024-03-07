#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A, B;
  char op;
  cin >> N >> A;
  rep(i, N) {
    cin >> op >> B;
    if (op == '+') {
      A += B;
      cout << i + 1 << ":" << A << endl;
    }
    else if (op == '-') {
      A -= B;
      cout << i + 1 << ":" << A << endl;
    }
    else if (op == '*') {
      A *= B;
      cout << i + 1 << ":" << A << endl;
    }
    else if (op == '/' && B != 0) {
      A /= B;
      cout << i + 1 << ":" << A << endl;
    }
    else {
      cout << "error" << endl;
      break;
    }
  }
  return 0;
}