#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int X, N;
    cin >> X >> N;
    int x = X;
    int cnt = 0;
    while (x < N) {
        int r = x % 3;
        if (r == 0) {
            x += 1;
        } else if (r == 1) {
            x *= 2;
        } else {
            x *= 3;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
