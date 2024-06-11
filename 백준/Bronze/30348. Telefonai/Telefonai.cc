#include <iostream>
#include <string>
#include <set>
#include <limits.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    int res = INT_MAX;

    for (int i = 0; i < N; ++i) {
        string K;
        getline(cin, K);

        bool flag = true;
        char last = '0';
        for (char number : K) {
            if (last >= number) {
                flag = false;
                break;
            }
            last = number;
        }

        if (flag || set<char>(K.begin(), K.end()).size() == 1) {
            res = min(res, stoi(K));
        }
    }

    if (res == INT_MAX) {
        cout << "NERASTA" << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}
