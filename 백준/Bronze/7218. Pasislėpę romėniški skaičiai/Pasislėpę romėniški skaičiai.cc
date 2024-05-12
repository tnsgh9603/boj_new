#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main(){
	int N; 
	scanf("%d", &N);
	char str[101];
	scanf("%s", str);
	
	int length = strlen(str), idx;
	int number[13] = {};
	
	for(idx = 0; idx < length; ++idx){
		if(str[idx] == 'I') number[1] = 1;
		if(idx + 1 < length && str[idx] == 'I' && str[idx + 1] == 'I') number[2] = 1;
		if(idx + 2 < length && str[idx] == 'I' && str[idx + 1] == 'I' && str[idx + 2] == 'I') number[3] = 1;
		
		if(idx + 1 < length && str[idx] == 'I' && str[idx + 1] == 'V') number[4] = 1;
		if(str[idx] == 'V') number[5] = 1;
		if(idx + 1 < length && str[idx] == 'V' && str[idx + 1] == 'I') number[6] = 1;
		
		if(idx + 2 < length && str[idx] == 'V' && str[idx + 1] == 'I' && str[idx + 2] == 'I') number[7] = 1;
		if(idx + 3 < length && str[idx] == 'V' && str[idx + 1] == 'I' && str[idx + 2] == 'I' && str[idx + 3] == 'I') number[8] = 1;
		if(idx + 1 < length && str[idx] == 'I' && str[idx + 1] == 'X') number[9] = 1;
		
		if(str[idx] == 'X') number[10] = 1;
		if(idx + 1 < length && str[idx] == 'X' && str[idx + 1] == 'I') number[11] = 1;
		if(idx + 2 < length && str[idx] == 'X' && str[idx + 1] == 'I' && str[idx + 2] == 'I') number[12] = 1;
	}
	
	for(idx = 1; idx <= 12; ++idx){
		if(number[idx]){
			printf("%d ", idx);
		}
	}

	return 0;
}