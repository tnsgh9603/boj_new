#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

int main() {
	fastio;
	int N, M;
	std::cin >> N >> M;
	std::cout << (N - 1) * (M - 1) * 2;
}