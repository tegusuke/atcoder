#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, a;
  cin >> n >> l;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a >= l) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}