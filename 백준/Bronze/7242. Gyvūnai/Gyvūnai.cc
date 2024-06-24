#include <iostream>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int start = -1;
    int end = 1441;

    for (int i = 0; i < N; ++i) {
        int hFrom, minFrom, hTo, minTo;
        cin >> hFrom >> minFrom >> hTo >> minTo;

        if (start < hFrom * 60 + minFrom) start = hFrom * 60 + minFrom;
        if (end > hTo * 60 + minTo) end = hTo * 60 + minTo;
    }

    if (start >= end) {
        cout << "NE";
    } else {
        cout << "TAIP" << endl;
        cout << start / 60 << ' ' << start % 60 << ' ';
        cout << end / 60 << ' ' << end % 60;
    }

    return 0;
}
