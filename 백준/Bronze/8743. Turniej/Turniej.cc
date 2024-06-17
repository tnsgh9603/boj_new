#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
	int z;
	scanf("%d", &z); 
	for (int i = 1; i <= z; ++i) {
		int n, k;
		scanf("%d %d", &n, &k);  
		printf("%d\n", n < k - 1 ? n : k - 1);
	}
	return 0;
}