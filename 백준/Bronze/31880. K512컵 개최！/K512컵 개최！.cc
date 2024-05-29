#include <iostream>
#define ll long long
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll N, M, i, x, res = 0;
	cin >> N >> M;
	for (i = 1; i <= N; i++){
		cin >> x;
		res += x;
	}
	for (i = 1; i <= M; i++){
		cin >> x;
		if (x) res *= x;
	}
	cout << res;
}