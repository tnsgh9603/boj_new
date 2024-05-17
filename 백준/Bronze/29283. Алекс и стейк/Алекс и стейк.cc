#include <iostream>
#include <cstdio>  // freopen for redirecting input
#include <sstream>  // ostringstream for building the output

int main() {
    // Redirect standard input to read from the console
    std::ios::sync_with_stdio(false); // Disable synchronization with C-style I/O
    std::cin.tie(nullptr); // Untie cin from cout for performance

    int k;
    std::cin >> k; 

    long long res = 0;
    long long plus = 30;
    for (int i = 1; i <= k / 5; ++i) {
        res += 5 * plus;
        plus += 30;
    }

    res += (k % 5) * plus;

    std::ostringstream sb;
    sb << res;

    std::cout << sb.str();
    
    return 0;
}
