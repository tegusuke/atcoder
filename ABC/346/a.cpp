#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n - 1);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n - 1; i++) {
    b.at(i) = a.at(i) * a.at(i + 1);
  }
  for (int i = 0; i < n - 1; i++) {
    cout << b.at(i) << " ";
  }
  cout << endl;
  return 0;
}