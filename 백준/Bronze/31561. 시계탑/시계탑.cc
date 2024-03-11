#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double M, answer;
int main() {
    fastio;
    cin >> M;
    if (M > 30) {
        answer = 15 + (M - 30) * 3 / 2;
    } else {
        answer = M / 2;
    }
    cout << fixed << setprecision(1) << answer;
    return 0;
}