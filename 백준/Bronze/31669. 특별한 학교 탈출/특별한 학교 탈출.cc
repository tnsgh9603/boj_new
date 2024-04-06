#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[101][101], cnt[101];

int main() {
    fastio;
    int n, m;
    char c;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> c;
            if (c == 'O') {
                cnt[j] = 1;
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (!cnt[i]) {
            cout << i;
            return 0;
        }
    }
    cout << "ESCAPE FAILED";
    return 0;
}