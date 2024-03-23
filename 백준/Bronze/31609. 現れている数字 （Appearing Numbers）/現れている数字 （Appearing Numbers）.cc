#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    vector<bool> res(10, false);
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        res[num] = true;
    }
    for (int i = 0; i <= 9; ++i) {
        if (res[i]) {
            std::cout << i << "\n";
        }
    }
    return 0;
}