#include <iostream>

using namespace std;

int main() {
    int M;
    cin >> M;

    int cars[1001] = {0};

    for (int i = 1; i <= M; ++i) {
        int T, N;
        cin >> T >> N;

        if (cars[N] == 0) cars[N] = T;
        else cout << N << " " << T - cars[N] << endl;
    }

    return 0;
}
