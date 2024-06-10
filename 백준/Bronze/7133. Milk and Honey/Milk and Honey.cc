#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, DM, H, DH;
    cin >> M >> DM >> H >> DH;

    int res = 0;

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int C, B;
        cin >> C >> B;

        int value1 = 0;
        int m = M;
        for (int j = 0; j < C && m > 0; ++j) {
            value1 += m;
            m -= DM;
        }

        int value2 = 0;
        int h = H;
        for (int j = 0; j < B && h > 0; ++j) {
            value2 += h;
            h -= DH;
        }

        res += max(value1, value2);
    }

    cout << res;

    return 0;
}
