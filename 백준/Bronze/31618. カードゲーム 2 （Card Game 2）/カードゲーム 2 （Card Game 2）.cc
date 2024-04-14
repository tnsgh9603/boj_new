#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[200'001];

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) {
        cin >> i;
        visited[i] = 1;
    }
    bool flag = 0;
    for (int i = 0; i < n; ++i) {
        if (visited[v[i]] and visited[v[i] + 3] and visited[v[i] + 6]) {
            flag = 1;
            break;
        }
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}