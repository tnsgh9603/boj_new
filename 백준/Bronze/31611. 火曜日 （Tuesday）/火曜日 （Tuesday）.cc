#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    string result;
    int X;
    cin >> X;
    if (X % 7 == 2) {
        result = "1";
    } else {
        result = "0";
    }
    cout << result;
    return 0;
}
