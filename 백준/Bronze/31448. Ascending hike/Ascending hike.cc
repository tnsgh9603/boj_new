#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int N;
    std::cin >> N;

    int res = 0;
    int last = 2000000000;
    int start = 0;
    for (int i = 1; i <= N; ++i) {
        int height;
        std::cin >> height;

        if (last < height) { 
            if (res < height - start) {
                res = height - start;  
            }
        } else {
            start = height;  
        }

        last = height;  
    }
    std::cout << res;
    return 0;
}
