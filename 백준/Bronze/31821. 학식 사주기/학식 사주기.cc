#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[11];
int main() {
    fastio;
    int n, m, k, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    cin >> m;
    while (m--) {
        cin >> k;
        sum += arr[k];
    }
    cout << sum;
    return 0;
}