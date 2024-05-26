#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<string> students(M);
    for (int i = 0; i < M; ++i) {
        cin >> students[i];
    }

    int plus_x[4] = {1, -1, 0, 0};
    int plus_y[4] = {0, 0, 1, -1};

    double res = 0;
    for (int y = 0; y < M; ++y) {
        for (int x = 0; x < N; ++x) {
            int student = students[y][x] - '0';
            int tmp_sum = 0;
            double tmp_cnt = 0;

            for (int i = 0; i < 4; ++i) {
                int nx = x + plus_x[i];
                int ny = y + plus_y[i];

                if (0 > nx || nx >= N || 0 > ny || ny >= M) continue;

                tmp_sum += abs(student - (students[ny][nx] - '0'));
                tmp_cnt += 1;
            }

            res += tmp_sum / tmp_cnt;
        }
    }

    cout << fixed << setprecision(4) << res << endl;

    return 0;
}