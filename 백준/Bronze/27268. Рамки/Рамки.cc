#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<char>> rectangle(h, vector<char>(w, '.'));

    for (int i = 0; i < n; ++i) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        --r1; --c1; --r2; --c2;

        for (int x = c1; x <= c2; ++x) rectangle[r1][x] = 'a' + i;
        for (int x = c1; x <= c2; ++x) rectangle[r2][x] = 'a' + i;

        for (int y = r1; y <= r2; ++y) rectangle[y][c1] = 'a' + i;
        for (int y = r1; y <= r2; ++y) rectangle[y][c2] = 'a' + i;
    }

    for (const auto& row : rectangle) {
        for (char c : row) {
            cout << c;
        }
        cout << '\n';
    }

    return 0;
}
