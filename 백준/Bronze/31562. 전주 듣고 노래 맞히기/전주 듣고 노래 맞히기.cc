#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
	fastio;
    vector <string> v, v2;
	ll N, M, len, i;
	string s;
	string a, b, c, d, e, f, g;
	cin >> N >> M;
	for (i = 0; i < N; i++)
	{
		cin >> len >> s;
		v.push_back(s);
		cin >> a >> b >> c >> d >> e >> f >> g;
		v2.push_back(a + b + c);
	}
	for (i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		a += b; a += c;

		string Ans = "!";
		for (ll j = 0; j < N; j++)
			if (v2[j] == a)
			{
				if (Ans == "!") Ans = v[j];
				else Ans = "?";
			}
		cout << Ans << "\n";
	}
}