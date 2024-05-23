#include <iostream>
#include <string>

int main() {
    int odd = 0, even = 0;
    int n;
    std::cin >> n;
    std::string input;
    std::cin >> input; 
    for (char digit : input) {
        if ((digit - '0') % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }

    if (odd < even) {
        std::cout << 0 << std::endl;
    } else if (odd > even) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
