#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long

bool ck[1010101] = { 0 };
int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll i, j;
    vector <ll> v; v.push_back(1);
    for (i = 2; i <= 1000000; i++)
    {
        if (ck[i] == false) v.push_back(i);
        for (j = i; j <= 1000000; j += i) ck[j] = true;
    }
    ll T, N;
    cin >> T;
    while (cin >> N)
        cout << v[v[N]] << "\n";
}