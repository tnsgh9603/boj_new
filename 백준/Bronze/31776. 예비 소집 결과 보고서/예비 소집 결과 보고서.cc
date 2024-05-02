#include <iostream>
#define ll long long
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll N, i, a, b, c, cnt = 0;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a >> b >> c;
		if (a == -1) a = 1e9;
		if (b == -1) b = 1e9 + 1;
		if (c == -1) c = 1e9 + 2;

		if (a != 1e9 && a <= b && b <= c) cnt++;
	}
	cout << cnt;
}