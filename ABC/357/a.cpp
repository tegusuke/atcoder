#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h.at(i);
  }

  int sum = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    sum += h.at(i);
    if (sum <= m) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}