#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;

  int count = 0;
  rep(i, t.size()) {
    if (s.at(count) == t.at(i)) {
      cout << i + 1 << " ";
      count++;
    }
  } 
  cout << endl;
  return 0;
}