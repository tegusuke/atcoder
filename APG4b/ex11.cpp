#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int ans = A;
  int b;
  string op;

  for (int i = 0; i < N; i++) {
    cin >> op >> b;
    
    if (op == "+") {
      ans += b;
    }
    else if (op == "-") {
      ans -= b;
    }
    else if (op == "*") {
      ans *= b;
    }
    else if (op == "/" && b != 0) {
      ans /= b;
    }
    else {
      cout << "error" << endl;
      break;
    }

    cout << i + 1 << ":" << ans << endl;
  }
  return 0;
}