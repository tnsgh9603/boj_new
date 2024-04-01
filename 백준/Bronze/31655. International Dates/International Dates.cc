#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    int A, B, C;
	scanf("%d/%d/%d", &A, &B, &C);
    if (A <= 12 && B <= 12) {
        cout << "either";
    } else if (A <= 12) {
        cout << "US";
    } else {
        cout << "EU";
    }
    return 0;
}
