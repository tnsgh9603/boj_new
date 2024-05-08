#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<int, int> item;
int pill[100];
int main(){
    // freopen("input.txt", "r", stdin);
    int N; scanf("%d", &N);
 
    int effect, ID;
    for (int i = 0; i < N; i++){
        scanf("%d %d", &effect, &ID);
        // Hash 구성
        item[effect] = ID;
    }
 
 
    int R;  scanf("%d", &R);
    int symptom, cnt;
    bool isOk;
    for (int i = 0; i < R; i++){
        scanf("%d", &cnt);
        isOk = true;
        for (int j = 0; j < cnt; ++j) {
            scanf("%d", &symptom);
            if (item.count(symptom) != 0)
                pill[j] = item[symptom];
            else
                isOk = false;
        }
 
        if (isOk) { // 모든 증상이 치료가능하다면
            for (int j = 0; j < cnt; ++j) {
                printf("%d ", pill[j]);
            }   
        }
        else {
            printf("YOU DIED");
        }
        printf("\n");
    }
}