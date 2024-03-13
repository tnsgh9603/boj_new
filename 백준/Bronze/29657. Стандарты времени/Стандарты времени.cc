#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void func() {
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    int h1, m1, s1;
    cin >> h1 >> m1 >> s1;

    int second = h1 * b1 * c1 + m1 * c1 + s1;
    int minute = second / c2;
    second %= c2;
    int hour = minute / b2;
    minute %= b2;
    hour %= a2;
    cout << hour << " " << minute << " " << second << endl;
}

int main() {
    func();
    return 0;
}
