#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> answer;
    for (int _ = 0; _ < N; ++_) {
        int LAG_goal, DCU_goal;
        char colon;
        cin >> LAG_goal >> colon >> DCU_goal;

        int LAG = 0, DCU = 0;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (LAG_goal + i > DCU_goal + j) {
                    LAG += 1;
                } else if (LAG_goal + i < DCU_goal + j) {
                    DCU += 1;
                } else {
                    if (DCU_goal > i) {
                        DCU += 1;
                    } else if (DCU_goal < i) {
                        LAG += 1;
                    }
                }
            }
        }

        answer.push_back(to_string(LAG) + " " + to_string(DCU));
    }

    for (const string &result : answer) {
        cout << result << endl;
    }

    return 0;
}
