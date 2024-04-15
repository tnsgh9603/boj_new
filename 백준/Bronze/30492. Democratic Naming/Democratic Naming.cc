#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[1001][1001];
int cnt[1001];
int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 1; i <= m; ++i) {
        memset(cnt, 0, sizeof(cnt));
        int mx = 0;
        char c;
        for (int j = 1; j <= n; ++j) {
            ++cnt[board[j][i] - 'a'];
        }
        for (int j = 0; j < 26; ++j) {
            if (mx < cnt[j]) {
                mx = cnt[j];
                c = char('a' + j);
            }
        }
        cout << c;
    }
    return 0;
}