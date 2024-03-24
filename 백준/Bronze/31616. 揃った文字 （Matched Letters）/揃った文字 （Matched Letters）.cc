#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main(){
	fastio;
    int N;
	string S;
	cin >> N >> S;
	char c = S[0];
	bool flag = true;
	for(int idx = 1; idx < N; ++idx){
		if(c != S.at(idx)){
			flag = false;
			break;
		}
	}
	if(flag) std::cout << "Yes";
	else std::cout << "No";
}