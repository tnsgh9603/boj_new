#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    int k;
    cin >> k;  
    vector<pair<int, int>> locates(k);  
    for(int i = 0; i < k; ++i) {
        cin >> locates[i].first >> locates[i].second;
    }

    double res = numeric_limits<double>::max();  
    for(int i = 0; i < k; ++i) {
        double tmp = 0;  
        int x = locates[i].first;
        int y = locates[i].second;

        for(int j = 0; j < k; ++j) {
            if(i == j) continue;

            int nx = locates[j].first;
            int ny = locates[j].second;

            tmp += sqrt(pow(x - nx, 2.0) + pow(y - ny, 2.0));
        }

        tmp /= (k - 1);  
        if(res > tmp) res = tmp;
    }

    cout << fixed << setprecision(10) << res << endl;

    return 0;
}
