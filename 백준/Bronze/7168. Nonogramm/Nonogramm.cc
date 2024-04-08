#include <iostream>
using namespace std;

int main() {
    int N, M, i, j;
    cin >> N >> M;

    char strs[101][101];
    for (i = 0; i < N; ++i) {
        cin >> strs[i];
    }

    for (i = 0; i < N; ++i) {
        int tmp = 0;
        bool flag = false;

        for (j = 0; j < M; ++j) {
            if (strs[i][j] == '#') {
                tmp += 1;
                flag = true;
            } else if (tmp > 0) {
                cout << tmp << ' ';
                tmp = 0;
            }
        }

        if (tmp > 0 || !flag) {
            cout << tmp;
        }
        cout << '\n';
    }

    for (i = 0; i < M; ++i) {
        int tmp = 0;
        bool flag = false;

        for (j = 0; j < N; ++j) {
            if (strs[j][i] == '#') {
                tmp += 1;
                flag = true;
            } else if (tmp > 0) {
                cout << tmp << ' ';
                tmp = 0;
            }
        }

        if (tmp > 0 || !flag) {
            cout << tmp;
        }
        cout << '\n';
    }

    return 0;
}