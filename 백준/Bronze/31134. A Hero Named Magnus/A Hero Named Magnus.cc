#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
	int T;
	scanf("%d", &T);

	for (int i = 1; i <= T; ++i) {
		int x;
		scanf("%d", &x);
		printf("%lld\n", 2 * x - 1);
	}

	return 0;
}