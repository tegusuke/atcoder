#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) {
    cin >> h.at(i);
  }

  int ans = -1;
  rep(i, n) {
    if (h.at(0) < h.at(i)) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}