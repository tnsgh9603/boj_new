#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <cstdio>
#include <set>
#include <deque>
using namespace std;
#define FIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
const int INF = 1e9 + 9;

int main(){
    FIO;
    int n;
    cin >> n;
    int weight[7] = {100, 50, 20, 10, 5, 2, 1}; // 무게추
    int stone = 0;
    int left = 0, right = 0;
    for(int i = 0; i<n; i++){
        cin >> stone;
        if(i == 0){
            left += stone;
        }
        else if(i == 1){
            right += stone;
        }
        else{
            if(left == right){
                left += stone;
            }
            else if(left > right){
                right += stone;
            }
            else{
                left += stone;
            }
        }
    }
    int endw = abs(left - right);
    int cnt = 0;
    for(int i = 0; i<7; i++){
        if(endw == 0){
            break;
        }
        cnt += endw / weight[i];
        endw %= weight[i];
    }
    cout << cnt << '\n';
}