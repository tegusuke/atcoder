#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int plan1 = N * A;
  int plan2 = B;
  if (plan1 <= plan2) {
    cout << plan1 << endl;
  }
  else {
    cout << plan2 << endl;
  }
  return 0;
}