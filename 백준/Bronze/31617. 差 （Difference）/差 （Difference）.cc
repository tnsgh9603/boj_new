#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int K;
    cin >> K;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int M;
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    int res = 0;
    for (int p = 0; p < N; ++p) {
        for (int q = 0; q < M; ++q) {
            if (A[p] + K == B[q]) {
                res += 1;
            }
        }
    }
    cout << res;
    return 0;
}
