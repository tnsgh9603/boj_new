#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
	int n;
	cin >> n;
	int mx = 0;
	string s;
	for (int i = 1; i <= n; ++i) {
		int a;
		string b, c;
		cin >> a >> b >> c;
		if (a > mx && c == "Russia") {
			mx = a;
			s = b;
		}
	}
	cout << s;
    return 0;
}