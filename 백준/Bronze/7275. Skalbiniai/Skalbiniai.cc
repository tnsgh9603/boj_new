#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, M;
    cin >> N >> K >> M;

    vector<int> colors(N + 1);

    for (int i = 1; i <= K; i++) {
        int G;
        cin >> G;
        for (int j = 1; j <= G; j++) {
            int color;
            cin >> color;
            colors[color] = i;
        }
    }

    vector<int> groups(K + 1);
    for (int i = 1; i <= N; i++) {
        int D;
        cin >> D;
        groups[colors[i]] += D;
    }

    int res = 0;
    for (int i = 1; i <= K; i++) {
        res += groups[i] / M;
        res += (groups[i] % M == 0) ? 0 : 1;
    }

    cout << res;

    return 0;
}
