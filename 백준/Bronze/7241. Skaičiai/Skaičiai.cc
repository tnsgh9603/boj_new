#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    string target;
    cin >> a >> b >> c >> target;
    string s = to_string(a) + to_string(b) + to_string(c);
    sort(s.begin(), s.end());
    int cnt = 1;
    do {
        if (s == target) {
            cout << cnt;
        }
        ++cnt;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}