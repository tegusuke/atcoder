#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  bool odd_exist = false;
  int res = 0;
  while (true) {
    for (int x : A) {
      if (x % 2 != 0) {
        odd_exist = true;
        break;
      }
    }
    if (odd_exist) {
      break;
    }
    for (int i = 0; i < N; i++) {
      A.at(i) /= 2;
    }
    res++;
  }
  cout << res << endl;
  return 0;
}