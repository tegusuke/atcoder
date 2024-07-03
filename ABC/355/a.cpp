#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = -1;
  if (a != b) {
    if (a == 1 && b == 2) {
      ans = a + b;
    }
    else if (a == 2 && b == 1) {
      ans = a + b;
    }
    else {
      ans = abs(a - b);
    }
  }
  
  cout << ans << endl;
  return 0;
}