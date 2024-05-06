#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    ans += a;
  }
  cout << ans * -1 << endl;
  return 0;
}