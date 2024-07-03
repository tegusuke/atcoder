#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  map<string, int> sc;
  for (auto p : sc) {
    auto k = p.first;
    auto v = p.second;
    cin >> k >> v;
  }

  for (auto p : sc) {
    auto k = p.first;
    auto v = p.second;
    cout << k << ", " << v << endl;
  }
  return 0;
}