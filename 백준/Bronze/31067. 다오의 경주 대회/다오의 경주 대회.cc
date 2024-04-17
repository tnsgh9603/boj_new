#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
	fastio;
    int n, k, t, a, ans = 0;
	cin >> n >> k >> t;
	for (int i = 1; i < n; ++i) {
		cin >> a;
		if (t >= a) {
			a += k;
			ans++;
			if (t >= a) {
				cout << -1;
				return 0;
			}
		}
		t = a;
	}
	cout << ans;
	return 0;
}