#include <iostream>
#include <string>

using namespace std;

int main() {
    string formula;
    cin >> formula;

    int idx = 0;
    int res = 0;

    while (idx < formula.length()) {
        if (formula[idx] == 'H') {
            if (idx + 1 < formula.length() && isdigit(formula[idx + 1])) {
                res += formula[idx + 1] - '0';
                idx += 1;
            } else {
                res += 1;
            }
        } else if (formula[idx] == 'C') {
            if (idx + 1 < formula.length() && isdigit(formula[idx + 1])) {
                res += 12 * (formula[idx + 1] - '0');
                idx += 1;
            } else {
                res += 12;
            }
        } else if (formula[idx] == 'N') {
            if (idx + 1 < formula.length() && isdigit(formula[idx + 1])) {
                res += 14 * (formula[idx + 1] - '0');
                idx += 1;
            } else {
                res += 14;
            }
        } else {
            if (idx + 1 < formula.length() && isdigit(formula[idx + 1])) {
                res += 16 * (formula[idx + 1] - '0');
                idx += 1;
            } else {
                res += 16;
            }
        }
        idx += 1;
    }
    cout << res << endl;
    return 0;
}