#include <bits/stdc++.h>
using namespace std;

// TLEコード

int main() {
  int n, m, l, q;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b.at(i);
  }
  cin >> l;
  vector<int> c(l);
  for (int i = 0; i < l; i++) {
    cin >> c.at(i);
  }
  cin >> q;
  vector<int> x(q);
  for (int i = 0; i < q; i++) {
    cin >> x.at(i);
  }

  vector<string> ans(q, "No");

  for (int h = 0; h < q; h++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        for (int k = 0; k < l; k++) {
          if (a.at(i) + b.at(j) + c.at(k) == x.at(h)) {
            ans.at(h) = "Yes";
          }
        }
      }
    }
  }
  
  for (int i = 0; i < q; i++) {
    cout << ans.at(i) << endl;
  }
  return 0;
}