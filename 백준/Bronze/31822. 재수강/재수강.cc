#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
	std::string code;  
	std::cin >> code;

	int N; 
	std::cin >> N;

	int res = 0; 

	for (int i = 1; i <= N; ++i) {
		std::string tmp;
		std::cin >> tmp;

		bool flag = true;
		for (int idx = 0; idx < 5; ++idx) { 
			if (code.at(idx) != tmp.at(idx)) {
				flag = false;
				break;
			}
		}
		if (flag) res += 1;
	}

	std::cout << res;
}