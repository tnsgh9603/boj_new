#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  int cnt = n;
  vector<bool> v(n, false);
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int x; cin >> x; x--;
      if (!v[x]) v[x] = true, cnt--;
    } else if (op == 2) {
      int x; cin >> x; x--;
      if (v[x]) v[x] = false, cnt++;
    } else {
      cout << cnt << "\n";
    }
  }

  return 0;
}