#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int A_sum = 0, B_sum = 0;
    vector<int> A_count(11, 0), B_count(11, 0);
    for (int i = 0; i < 18; ++i) {
        int A;
        cin >> A;
        A_sum += A;
        A_count[A]++;
    }
    for (int i = 0; i < 18; ++i) {
        int B;
        cin >> B;
        B_sum += B;
        B_count[B]++;
    }
    if (A_sum > B_sum) {
        cout << "Algosia";
        return 0;
    }
    if (A_sum < B_sum) {
        cout << "Bajtek";
        return 0;
    }
    for (int i = 10; i >= 1; --i) {
        if (A_count[i] > B_count[i]) {
            cout << "Algosia";
            return 0;
        } else if (A_count[i] < B_count[i]) {
            cout << "Bajtek";
            return 0;
        }
    }
    cout << "remis";
    return 0;
}
