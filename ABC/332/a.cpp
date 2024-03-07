#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, k, p, q;
  cin >> n >> s >> k;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    ans += (p * q);
  }
  if (ans >= s) {
    cout << ans << endl;
  }
  else {
    cout << ans + k << endl;
  }
  return 0;
}