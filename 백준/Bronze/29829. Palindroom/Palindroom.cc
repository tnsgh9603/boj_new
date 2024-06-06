#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    // Input reading
    string input;
    getline(cin, input);
    stringstream ss(input);
    
    vector<int> numbers(4);
    for (int i = 0; i < 4; ++i) {
        ss >> numbers[i];
    }

    int a = numbers[0];
    int b = numbers[1];
    int c = numbers[2];
    int d = numbers[3];

    // Output result
    if (a == d) {
        cout << "JAH" << endl;
        cout << a << " " << b << " " << b << " " << d;
    } else if (b == c) {
        cout << "JAH" << endl;
        cout << a << " " << b << " " << b << " " << a;
    } else {
        cout << "EI";
    }

    return 0;
}
