#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main(){
    fastio;
	string str;
	cin >> str;
	for(int idx = 0; idx < str.length(); ++idx){
		if(str.at(idx) - '0' != idx + 1){
			cout << "-1";
			return 0;
		}
	}	
	cout << str.length();
    return 0;
}
