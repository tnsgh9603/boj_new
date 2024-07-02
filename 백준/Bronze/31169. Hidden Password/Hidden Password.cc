#include <iostream>
#include <string>
#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;
int main() {
    fastio;

    int z;
    cin >> z;

    for (int i = 1; i <= z; ++i) {
        string password;
        cin >> password;

        for (int idx = 0; idx < password.length(); ++idx) {
            cout << (char)((password.at(idx) - 'a' + 13) % 26 + 'a');
        }
        cout << '\n';
    }
}
