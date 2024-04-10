#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, d;
    cin >> n >> d;

    if (n & 1) {
        for (int i=d-(n-1)/2; i<=d+(n-1)/2; i++) cout << i << " ";
    } else {
        for (int i=d-n/2; i<=d-1; ++i) {
            cout << i << " ";
        }
        for (int i=d+1; i<=d+n/2; ++i) {
            cout << i << " ";
        }
    }
    return 0;
}