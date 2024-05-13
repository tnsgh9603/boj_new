#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	long long sum = 0;
	int res = 0;
	
	for(int i = 1; i <= N; ++i){
		int stress;
		scanf("%d", &stress);
		sum += stress;
		if(sum < 0) sum = 0; 
		if(sum >= M) res += 1;
	}
	
	printf("%d", res); 

	return 0;
}