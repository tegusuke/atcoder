#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  //2次元配列に入力
  vector<vector<char>> S(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }
  //縦方向をx、横方向をyとして近傍の座標を指定
  for (int x = 0; x < H; x++) {
    for (int y = 0; y < W; y++) {
      if (S.at(x).at(y) == '.') {
        int count = 0;
        for (int dx = -1; dx < 2; dx++) {
          for (int dy = -1; dy < 2; dy++) {
            if (dx == 0 && dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if (0 <= xx && xx < H && 0 <= yy && yy < W) {
              if (S.at(xx).at(yy) == '#') count++;
            }
          }
        }
        //char型に変換
        S.at(x).at(y) = (char)('0' + count);
      }
    }
  }
  //2次元配列を出力
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << S.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}