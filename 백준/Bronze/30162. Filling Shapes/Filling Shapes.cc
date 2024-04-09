#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, ans = 1;
    cin >> N;
    if (N & 1) {
        cout << 0;
    }
    else {
        N /= 2;
        while (N--) {
            ans *= 2;
        }
        cout << ans;
    }
    return 0;
}