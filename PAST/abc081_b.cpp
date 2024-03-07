#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  bool exist_odd = false;
  int counter = 0;
  while (true) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 != 0) {
        exist_odd = true;
        break;
      }
    }
    if (exist_odd) {
      break;
    }
    for (int i = 0; i < N; i++) {
      A.at(i) /= 2;
    }
    counter++;
  }
  cout << counter << endl;
  return 0;
}