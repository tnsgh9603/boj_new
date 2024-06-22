#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    if (r == 1 && c > 1) {
        cout << "0";
    } else {
        long long prime = 998244353;
        vector<vector<long long>> dp(c, vector<long long>(r, 0));
        
        for (int i = 0; i < r; ++i) {
            dp[0][i] = 1;
        }

        for (int i = 1; i < c; ++i) {
            for (int j = 0; j < r; ++j) {
                for (int k = 0; k < r; ++k) {
                    if (j == k) continue;
                    dp[i][j] += dp[i - 1][k];
                    dp[i][j] %= prime;
                }
            }
        }

        long long res = 0;
        for (int i = 0; i < r; ++i) {
            res += dp[c - 1][i];
            res %= prime;
        }

        cout << res;
    }

    return 0;
}
