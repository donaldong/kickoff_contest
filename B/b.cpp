#include <bits/stdc++.h>
using namespace std;

using vs = vector<string>;

int T, R, C;
vs G, G2;
// left, up, right, down
int DR[] = {0, -1, 0, 1};
int DC[] = {-1, 0, 1, 0};

bool in_grid(int r, int c) { return 0 <= r && r < R && 0 <= c && c < C; }

int step(int r, int c, int dir) {
  int res = 0;
  do {
    r += DR[dir];
    c += DC[dir];
    ++res;
  } while (in_grid(r, c) && G2[r][c] == '?');
  return res - 1;
}

void fill(int r, int c, int dir, int step, char mark) {
  for (int i = 0; i < step; ++i) {
    r += DR[dir];
    c += DC[dir];
    G2[r][c] = mark;
  }
}

void fill() {
  for (int r = 0; r < R; ++r) for (int c = 0; c < C; ++c) {
    char m = G[r][c];
    if (m == '?') continue;
    // first fill left and right
    int a = step(r, c, 0), b = step(r, c, 2);
    fill(r, c, 0, a, m), fill(r, c, 2, b, m);
    int u = R, d = R;
    for (int i = c - a; i <= c + b; ++i) {
      u = min(u, step(r, i, 1)), d = min(d, step(r, i, 3));
    }
    // then try to fill up and down
    for (int i = c - a; i <= c + b; ++i) {
      fill(r, i, 1, u, m), fill(r, i, 3, d, m);
    }
  }
}

int main() {
  cin >> T;
  for (int t = 0; t < T; ++t) {
    printf("Case #%d:\n", t + 1);
    cin >> R >> C;
    G = vs(R);
    for (auto &row : G) cin >> row;
    G2 = G;
    fill();
    for (auto &row : G2) cout << row << endl;
  }
  return 0;
}
