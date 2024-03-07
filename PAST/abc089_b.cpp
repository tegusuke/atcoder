#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  char S;
  bool P = false, W = false, G = false, Y = false;
  for (int i = 0; i < N; i++) {
    cin >> S;
    if (S == 'P') {
      P = true;
    }
    else if (S == 'W') {
      W = true;
    }
    else if (S == 'G') {
      G = true;
    }
    else {
      Y = true;
    }
  }
  if (P && W && G && Y) {
    cout << "Four" << endl;
  }
  else {
    cout << "Three" << endl;
  }
  return 0;
}