#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

int main() {
  int n, k;
  cin >> n >> k;
  vi N(n);
  int max_num = -1;
  for (auto &num : N) cin >> num, max_num = max(max_num, num);
  vi F(max_num + 1, 0);
  for (auto &num : N) ++F[num];
  int res = 0;
  for (size_t i = 1; i < F.size(); ++i) {
    if (F[i] >= k) res += i * F[i];
  }
  cout << res << endl;
  return 0;
}
