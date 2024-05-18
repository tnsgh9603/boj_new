#include <stdio.h> 
#include <math.h> 
int main() {
	int a, b, S;
	scanf("%d %d %d", &a, &b, &S);

	double L = (  (a + b) + sqrt(  pow(a + b, 2) - 4 * (a * b - S)  )  ) / 2;

	int res = round(L);
	if ((res - a) * (res - b) == S) printf("%d", res);
	else printf("-1");

	return 0;
}