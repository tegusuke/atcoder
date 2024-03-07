#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), s(n - 1), t(n - 1);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> s.at(i);
    cin >> t.at(i);
  }
  
}