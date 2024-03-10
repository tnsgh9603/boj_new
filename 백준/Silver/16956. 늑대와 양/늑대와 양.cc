#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[501][501];
int n, m;
bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}
int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    for (int x = 1; x <= n; ++x) {
        for (int y = 1; y <= m; ++y) {
            if (board[x][y] == 'S') {
                for (int k = 0; k < 4; ++k) {
                    int nx = x + "0121"[k] - '1';
                    int ny = y + "1210"[k] - '1';
                    if (OOB(nx, ny) and board[nx][ny] == 'W') {
                        cout << 0;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "1\n";
    for (int x = 1; x <= n; ++x) {
        for (int y = 1; y <= m; ++y) {
            if (board[x][y] == '.') {
                board[x][y] = 'D';
            }
            cout << board[x][y];
        }
        cout << '\n';
    }
    return 0;
}