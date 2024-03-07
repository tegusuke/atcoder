#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int T = 0, A = 0;
  for (int i = 0; i < N; i++) {
    int X, Y;
    cin >> X >> Y;
    T += X;
    A += Y;
  }
  if (T > A) {
    cout << "Takahashi" << endl;
  }
  else if (T < A) {
    cout << "Aoki" << endl;
  }
  else {
    cout << "Draw" << endl;
  }
  return 0;
}