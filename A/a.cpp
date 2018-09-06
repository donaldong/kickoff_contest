#include <bits/stdc++.h>
using namespace std;

using vs = vector<string>;

vs split(string &line)  {
  stringstream ss(line);
  vs res;
  string token;
  while (getline(ss, token, ' ')) res.push_back(token); 
  return res;
}

int main() {
  string line;
  getline(cin, line);
  int n, m;
  auto tokens = split(line);
  n = stoi(tokens[0]), m = stoi(tokens[1]);
  vs G(n, string(m, '.'));
  int r = 0, c = 0;
  while (getline(cin, line)) {
    tokens = split(line);
    if (tokens.size() == 1) G[r][c] = 'X';
    else {
      int k = stoi(tokens[1]);
      if (tokens[0] == "L") c -= k;
      else if (tokens[0] == "R") c += k;
      else if (tokens[0] == "U") r -= k;
      else r += k;
    }
  }
  for (auto &row : G) cout << row << endl;
  return 0;
}
