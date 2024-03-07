#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int n = N, fx = 0;
  while (n > 0) {
    fx += n % 10;
    n /= 10;
  }
  if (N % fx == 0) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}