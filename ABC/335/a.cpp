#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int last = S.size();
  S.at(last - 1) = '4';
  cout << S << endl;
  return 0;
}