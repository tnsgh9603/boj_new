#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
	int x;
	scanf("%d", &x);
	if(!x) { printf("NO"); return 0; }
	while (x) {
		if (x % 3 > 1) { printf("NO"); return 0; }
		x /= 3;
	}
	printf("YES");
	return 0;
}