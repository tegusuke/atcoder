#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int ans = 0;
  for (int y = 1; y <= N; y++) {
    int x;
    cin >> x;
    if (x < K) {
      ans += min(x * 2, (K - x) * 2);
    }
    else {
      ans += (x - K) * 2;
    }
  } 
  cout << ans << endl;
  return 0;
}