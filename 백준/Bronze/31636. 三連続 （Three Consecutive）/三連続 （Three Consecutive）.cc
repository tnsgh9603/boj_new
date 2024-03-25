#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
	int N;
	string str;
	cin >> N;
	cin >> str;
	if (str.find("ooo") != -1) {
        cout << "Yes";
    } else { 
        cout << "No";
    }
    return 0;
}