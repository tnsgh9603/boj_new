#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[3];
int main() {
    fastio;
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[2] == arr[0] + arr[1]) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}