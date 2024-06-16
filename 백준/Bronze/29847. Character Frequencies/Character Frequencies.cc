#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
	fastio;

	int N;
	std::cin >> N;

	std::unordered_map<char, int> m; 
	std::cin.ignore();
	for (int i = 1; i <= N; ++i) {
		std::string str;
		std::getline(std::cin, str);

		for (int idx = 0; idx < str.length(); ++idx) {
			char c = str.at(idx);
			if (c != ' ') m[c]++;
		}
	}
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		std::cout << itr->first << ' ' << itr->second << '\n';
	}
}