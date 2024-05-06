#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), A(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    A.at(i) = 2 ^ a.at(i);
  }

  
  return 0;
}