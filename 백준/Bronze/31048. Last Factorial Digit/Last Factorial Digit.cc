# include <stdio.h> 
int solution(int N) {
	int res = 1;

	for (int i = 2; i <= N; ++i) {
		res *= i;
		res %= 10;  
	}
	return res;
}

int main() {
	int T;
	scanf("%d", &T);

	for (int i = 1; i <= T; ++i) {
		int N;
		scanf("%d", &N);
		printf("%d\n", solution(N));
	}

	return 0;
}