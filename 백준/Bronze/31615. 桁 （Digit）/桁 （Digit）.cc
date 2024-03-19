#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int sum = A + B;
    int res = 0;
    while (sum > 0) {
        sum /= 10;
        res += 1;
    }
    cout << res;
    return 0;
}
