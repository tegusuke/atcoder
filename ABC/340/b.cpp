#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; 
  cin >> q;
  vector<int> a;
  int query, x, k, ans;
  for (int i = 0; i < q; i++) {
    cin >> query;
    if (query == 1) {
      cin >> x;
      a.push_back(x);
    }
    else {
      cin >> k;
      ans = a.at(a.size() - k);
      cout << ans << endl;
    }
  }
  return 0;
}