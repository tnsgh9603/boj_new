#include <bits/stdc++.h>

using namespace std;

const int oo = 0x3f3f3f3f;
const double eps = 1e-9;
const double PI = 2.0 * acos(0.0);


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;

#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define FORS(i,a,b,s) for (int i = (a); i < (b); i=i+(s))
#define FORD(i,a,b) for (int i = int(b)-1; i >= (a); i--)
#define FORIT(i,c) for (__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)


int main(){
	ll n; cin >> n;
	ll m; cin >> m;
	ll k; cin >> k;
	vi s(n);
	FOR(i,0,n) cin >> s[i];
	sort(all(s));
	ll total = 0;
	FOR(i,0,n) total += s[i];
	ll total2 = 0;
	FOR(i,max(n-m-k,0LL),n) total2 += s[i];

	cout << fixed << setprecision(4) << double(total2)/total*100;
}
