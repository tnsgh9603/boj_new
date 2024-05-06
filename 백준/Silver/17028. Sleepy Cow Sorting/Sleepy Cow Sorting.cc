#include <stdio.h>
int N;
int d[150];
int main() {
    int i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &d[i]);
    for (i = N - 1; i > 0; i--) if (d[i - 1] > d[i]) break;
    printf("%d", i);
    return 0;
}