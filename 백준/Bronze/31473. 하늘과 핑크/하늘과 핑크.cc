#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, a, b, suma = 0, sumb = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        suma += a;
    }
    for (int i = 0; i < N; ++i) {
        cin >> b;
        sumb += b;
    }
    cout << sumb << ' ' << suma;
    return 0;
}