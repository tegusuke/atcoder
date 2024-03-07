#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;

  vector<int> score(N);
  for (int i = 0; i < N; i++) {
    cin >> score.at(i);
    sum += score.at(i);
  }

  int ave = 0;
  ave = sum / N;

  for (int i = 0; i < N; i++) {
    if (score.at(i) >= ave) {
      cout << score.at(i) - ave << endl;
    }
    else if (score.at(i) < ave) {
      cout << ave - score.at(i) << endl;
    }
  }
  return 0;
}