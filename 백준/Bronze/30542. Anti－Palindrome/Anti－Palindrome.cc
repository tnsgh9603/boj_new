#include <iostream>
#include <string>

#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

using namespace std;

int main() {
    fastio;

    string str;
    getline(cin, str);

    char str2[81];
    int length = 0;
    for (int idx = 0; idx < str.length(); ++idx) {
        char c = str.at(idx);

        if ('a' <= c && c <= 'z') {
            str2[length++] = c;
        }
        else if ('A' <= c && c <= 'Z') {
            str2[length++] = c + 32;
        }
    }

    for (int start = 0; start < length; ++start) {
        for (int end = start + 1; end < length; ++end) {
            bool palindrome = true;

            if (end - start == 1) {
                if (str2[start] != str2[end]) palindrome = false;
            }
            else {
                for (int idx = 0; idx < (end - start + 1) / 2; ++idx) {
                    if (str2[idx + start] != str2[end - idx]) {
                        palindrome = false;
                        break;
                    }
                }
            }

            if (palindrome) {
                cout << "Palindrome";
                return 0;
            }
        }
    }

    cout << "Anti-palindrome";
}
