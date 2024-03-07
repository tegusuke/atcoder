#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> P(n);
  for (int i = 0; i < n; i++) {
    cin >> P.at(i);
  }
  int q;
  cin >> q;

  vector<int> ans;

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    int j = 0, k = 0;
    while (j < n) {
      if (a == P.at(j)) {
        break;
      }
      j++;
    }
    while (k < n) {
      if (b == P.at(k)) {
        break;
      }
      k++;
    }
    if (j < k) {
      ans.push_back(a);
    }
    else {
      ans.push_back(b);
    }
  }
  for (int i = 0; i < q; i++) {
    cout << ans.at(i) << endl;
  }
  return 0;
}