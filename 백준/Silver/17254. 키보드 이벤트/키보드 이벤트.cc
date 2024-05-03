#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct s { int a, b; char c; };
bool cmp(s k1, s k2) {
	if (k1.b != k2.b)return k1.b < k2.b;
	return k1.a < k2.a;
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	s* key = (s*)malloc(sizeof(s)*m);
	for (int i = 0; i < m; i++)scanf("%d%d %c", &key[i].a, &key[i].b, &key[i].c);
	sort(key, key + m, cmp);
	for (int i = 0; i < m; i++)printf("%c", key[i].c);
	return 0;
}