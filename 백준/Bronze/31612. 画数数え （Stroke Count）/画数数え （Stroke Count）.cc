#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    int res = 0;
    for (char i : S) {
        if (i == 'o')
            res += 1;
        else
            res += 2;
    }
    cout << res;
    return 0;
}
