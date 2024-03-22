#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
	int A, B, C;
    cin >> A >> B >> C;
    cout << (A + B == C ? "correct!" : "wrong!");
	return 0;
}