#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = 0;
  for (int a = 1; a < 10; a++) {
    for (int b = 0; b < 10; b++) {
      for (int c = 0; c < 10; c++) {
        int x = 10001 * a + 1010 * b + 100 * c;
        if (x >= A && x <= B) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}