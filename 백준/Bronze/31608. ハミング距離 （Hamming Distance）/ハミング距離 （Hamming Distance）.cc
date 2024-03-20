#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    
    string S, T;
    cin >> S >> T;

    int res = 0;
    for (int idx = 0; idx < N; idx++) {
        if (S[idx] != T[idx]) {
            res += 1;
        }
    }
    cout << res;
    return 0;
}
