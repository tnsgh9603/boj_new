#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a = 100;
    for (int i = 1; i <= n; ++i) {
        cout << a << '\n';

        a *= 2;
        int tmp = a;

        while (true) {
            int zeroCnt = 0;
            int value = tmp;

            while (tmp > 0 && tmp % 10 == 0) {
                tmp /= 10;
                zeroCnt += 1;
            }

            int length = zeroCnt;
            while (tmp > 0) {
                tmp /= 10;
                length += 1;
            }

            if (length <= 2 * zeroCnt) {
                a = value;
                break;
            }

            tmp = value + pow(10, zeroCnt);
        }
    }

    return 0;
}
