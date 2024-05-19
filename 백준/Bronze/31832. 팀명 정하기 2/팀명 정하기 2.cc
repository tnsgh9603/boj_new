#include <iostream>  // for std::cin, std::cout
#include <sstream>  // for std::ostringstream
#include <string>  // for std::string

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;  // Number of team name candidates
    std::cin.ignore();  // Ignore the remaining newline after reading N

    std::ostringstream sb;

    for (int i = 1; i <= N; ++i) {
        std::string S;
        std::getline(std::cin, S);  // Team name candidate

        int length = S.length();
        int lower = 0, upper = 0, hyphen = 0;

        if (length > 10) continue;  // Team name must be 10 characters or fewer

        for (int idx = 0; idx < length; ++idx) {
            if ('a' <= S[idx] && S[idx] <= 'z') lower += 1;
            else if ('A' <= S[idx] && S[idx] <= 'Z') upper += 1;
            else if (S[idx] == '-') hyphen += 1;
        }

        if (lower < upper) continue;  // Cannot have more uppercase than lowercase letters

        if (lower + upper + hyphen == 0) continue;  // Must contain at least one non-digit character

        sb << S << '\n';
    }

    std::cout << sb.str();
    return 0;
}
