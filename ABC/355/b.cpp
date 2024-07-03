#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m), c(n + m);
  rep(i, n) {
    cin >> a.at(i);
  }
  rep(i, m) {
    cin >> b.at(i);
  }

  bool ans = false;
  sort(a.begin(), a.end());
  
  
  if (ans) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}