#include <iostream>  
#include <string>  
#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

int main() {
    fastio;

    std::string res;
    int max = 0;

    for (int i = 1; i <= 7; ++i) {
        std::string name;
        int value;

        std::cin >> name >> value;

        if (max < value) {
            max = value;
            res = name;
        }
    }
    std::cout << res;
}
