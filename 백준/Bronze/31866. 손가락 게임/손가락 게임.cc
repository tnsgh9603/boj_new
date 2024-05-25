#include <iostream>
#define ll long long
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll a, b;
	cin >> a >> b;
	if (a == 1 || a == 3 || a == 4)
	{
		if (b == 1 || b == 3 || b == 4) cout << '=';
		else cout << '<';
	}
	else if (b == 1 || b == 3 || b == 4) cout << '>';
	else
	{
		if ((a == 0 && b == 2) || (a == 2 && b == 5) || (a == 5 && b == 0)) cout << '>';
		else if (a == b) cout << '=';
		else cout << '<';
	}
}