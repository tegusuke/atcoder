#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  // Aliceの試行
  int pointAlice = 0;
  for (int i = 0; i < N; i += 2) {
    pointAlice += a.at(i);
  }

  // Bobの試行
  int pointBob = 0;
  for (int i = 1; i < N; i += 2) {
    pointBob += a.at(i);
  }

  cout << pointAlice - pointBob << endl;
  return 0;
}