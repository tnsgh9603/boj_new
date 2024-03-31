#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main() {
    vector<int> sums(46, 0);
    vector<int> cnts(46, 0);
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; ++i) {
        string word;
        getline(cin, word);

        for(int idx = 0; idx < word.length(); ++idx) {
            sums[idx] += static_cast<int>(word[idx]);
            cnts[idx]++;
        }
    }
    string result;
    for(int i = 0; i <= 45; ++i) {
        if(cnts[i] == 0) break;
        result += static_cast<char>(floor(sums[i] / static_cast<double>(cnts[i])));
    }
    cout << result;
    return 0;
}
