#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> ans(n, 1);
  vector<int> t(q);
  for (int i = 0; i < q; i++) {
    cin >> t.at(i);
  }

  for (int i = 0; i < q; i++) {
    if (ans.at(t.at(i) - 1) == 1) {
      ans.at(t.at(i)) = 0;
    }
    if (ans.at(t.at(i) - 1) == 0) {
      ans.at(t.at(i)) = 1;
    }
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    if (ans.at(i) == 1) {
      answer++;
    }
  }
  cout << answer << endl;
  return 0;
}