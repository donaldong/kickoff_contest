#include <bits/stdc++.h>
using namespace std;

using vb = vector<bool>;
using ll = long long;
int MAX_C = 1e6;

int main() {
  // seive
  vb P(MAX_C + 1, true);
  P[0] = P[1] = false;
  ll i = 2, j;
  for (; (j = i * i) <= MAX_C; ++i) {
    if (!P[i]) continue;
    for (; j <= MAX_C; j += i) P[j] = false;
  }
  int n, c, res = 0;
  cin >> n;
  while (n--) {
    cin >> c;
    if (P[c]) ++res;
  }
  cout << res << endl;
  return 0;
}
