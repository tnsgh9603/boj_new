#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main(){
	int N;
	std::cin >> N;
	
	std::string X = "", Y = "";
	for(int i = 1; i <= N; ++i){
		std::string x;
		std::cin >> x;
		
		X += x;
	}
	
	for(int i = 1; i <= N; ++i){
		std::string y;
		std::cin >> y;
		
		Y += y;
	}
	if(X.length() > Y.length()) std::cout << Y;
	else if(X.length() < Y.length()) std::cout << X;
	else{
		if(X < Y) std::cout << X;
		else std::cout << Y;
	}
}