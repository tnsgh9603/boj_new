#include <iostream>
#include <cstdlib>  

#define fastio std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
int main() {
	fastio;

	int N, Q;
	std::cin >> N >> Q;
	int* company = new int[N + 1];
	for (int i = 1; i <= N; ++i) {
		std::cin >> company[i];
	}
	for (int i = 1; i <= Q; ++i) {
		int query, A, B;
		std::cin >> query >> A >> B;

		if (query == 1) {
			company[A] = B;
		}
		else {
			std::cout << abs(company[A] - company[B]) << '\n';
		}
	}
}