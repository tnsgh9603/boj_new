#include <iostream>
int main() {
    int N, X;
    std::cin >> N >> X;

    int res = -1;
    for (int i = 1; i <= N; ++i) {
        int S, T;
        std::cin >> S >> T;
        if (S + T > X) continue;
        if (res < S) res = S;
    }
    std::cout << res;
    return 0;
}
