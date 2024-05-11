#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll a, b, c;
	cin >> a >> b >> c;
	if (c == 0) cout << sqrt(a + b);
	else cout << c * c - a - b;
}