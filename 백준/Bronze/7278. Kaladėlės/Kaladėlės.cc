#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> blocks(3);
    for (int i = 0; i < 3; ++i) {
        cin >> blocks[i];
    }

    int diff = INT_MAX;
    int block = blocks[0];
    int height = N;

    for (int i = 0; i < 3; ++i) {
        int tmpDiff1 = abs(blocks[i] * (N / blocks[i]) - N);
        int tmpDiff2 = abs(blocks[i] * (N / blocks[i] + 1) - N);

        if (diff > tmpDiff1 || (diff == tmpDiff1 && height > N)) {
            diff = tmpDiff1;
            block = blocks[i];
            height = blocks[i] * (N / blocks[i]);
        }

        if (diff > tmpDiff2) {
            diff = tmpDiff2;
            block = blocks[i];
            height = blocks[i] * (N / blocks[i] + 1);
        }
    }

    cout << block << " " << height << endl;
    return 0;
}
