#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    vector<int> alphabets(26, 0);
    for (char ch : a) {
        alphabets[ch - 'a'] += 1;
    }
    for (char ch : b) {
        alphabets[ch - 'a'] += 1;
    }

    string result;
    int length = 0;
    for (int idx = 0; idx < 26; ++idx) {
        while (alphabets[idx] > 0 && length < a.length()) {
            result += (char)('a' + idx);
            alphabets[idx] -= 1;
            length += 1;
        }
    }

    cout << result;
    return 0;
}
