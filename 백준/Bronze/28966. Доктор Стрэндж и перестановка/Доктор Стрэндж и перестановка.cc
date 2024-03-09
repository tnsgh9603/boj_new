#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int n, i;
    cin >> n;

    int arr[1001] = {};
    int odd_count = 0, even_count = 0;
    for (i = 1; i <= n; ++i) {
        cin >> arr[i];

        if (i % 2 == 0 && arr[i] % 2 == 1)
            odd_count += 1;
        if (i % 2 == 1 && arr[i] % 2 == 0)
            even_count += 1;
    }

    int idx = 0;
    int res[2] = {};
    if (odd_count == 1 && even_count == 1) {
        for (i = 1; i <= n; ++i) {
            if (i % 2 == 0 && arr[i] % 2 == 1)
                res[idx++] = i;
            if (i % 2 == 1 && arr[i] % 2 == 0)
                res[idx++] = i;
        }

        cout << res[0] << " " << res[1];
    } else if (n >= 3 && odd_count + even_count == 0) {
        cout << "1 3";
    } else {
        cout << "-1 -1";
    }

    return 0;
}
