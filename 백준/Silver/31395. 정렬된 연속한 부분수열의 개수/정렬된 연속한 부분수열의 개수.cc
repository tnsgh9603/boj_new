#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll N, i, before, now, cnt = 1;
    vector <ll> v;
    cin >> N >> before;
    for (i = 2; i <= N; i++)
    {
        cin >> now;
        if (before < now) cnt++;
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
        before = now;
    }
    v.push_back(cnt);
    ll sum = 0;
    for (ll x : v)
        sum += x * (x + 1) / 2;
    cout << sum;
}