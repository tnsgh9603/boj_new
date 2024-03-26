#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string S;
    getline(cin, S);
    char last = S[0];
    cout << last;
    for (int idx = 1; idx < S.length(); ++idx) {
        if (last == S[idx])
            continue;
        else {
            last = S[idx];
            cout << last;
        }
    }
    return 0;
}
