#include <iostream>
#include <algorithm>
#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);

int main() {
	fastio;
	int t, r, v;
	std::cin >> t >> r >> v;
	int s = t * v;
	std::cout << std::fixed;
	std::cout.precision(7);
	std::cout << std::max(0.0, (s - 2 * r) / (double)t);
}