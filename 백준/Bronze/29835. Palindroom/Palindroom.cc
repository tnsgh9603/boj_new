#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string S;

    cin >> N;
    cin >> S;
    int cnt = 0;
    string res = S;

    for (int left = 0; left < N / 2; ++left) {
        int right = N - 1 - left;

        res[left] = S[left];
        res[right] = S[right];
        if (S[left] == S[right]) continue;

        if (S[left] < S[right]) res[right] = S[left];
        else res[left] = S[right];

        cnt += 1; 
    }

    cout << cnt << '\n' << res << '\n';

    return 0;
}
