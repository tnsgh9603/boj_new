#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll X[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    ll Y[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
    ll Z[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    ll N, a, b, c, d;

    cin >> N;
    while (N--) 
    {
        cin >> a >> b >> c >> d;
        bool checkX = (X[a] == X[b] && X[b] == X[c] && X[c] == X[d]);
        bool checkY = (Y[a] == Y[b] && Y[b] == Y[c] && Y[c] == Y[d]);
        bool checkZ = (Z[a] == Z[b] && Z[b] == Z[c] && Z[c] == Z[d]);

        if (checkX || checkY || checkZ) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
