#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    string key;
    cin >> key;
    int cnt[10] = {0};
    for (int i = 0; i < 3; ++i) {
        cnt[key[i] - '0'] += 1;
    }
    if (cnt[1] == 1 && cnt[2] == 1 && cnt[3] == 1) cout << "Unlocked";
    else if (cnt[4] == 1 && cnt[5] == 1 && cnt[6] == 1) cout << "Unlocked";
    else if (cnt[7] == 1 && cnt[8] == 1 && cnt[9] == 1) cout << "Unlocked";
    else if (cnt[1] == 1 && cnt[4] == 1 && cnt[7] == 1) cout << "Unlocked";
    else if (cnt[3] == 1 && cnt[6] == 1 && cnt[9] == 1) cout << "Unlocked";
    else if (cnt[2] == 1 && cnt[5] == 1 && cnt[8] == 1) cout << "Unlocked";
    else if (cnt[5] == 1 && cnt[8] == 1 && cnt[0] == 1) cout << "Unlocked";
    else cout << "Locked";
    return 0;
}