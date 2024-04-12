#include <iostream>
#include <string>
using namespace std;

int compute(const string& n, const string& x) {
    int remainder = 0;
    int div = stoi(x); // x를 정수로 변환
    
    for (char ch : n) {
        remainder = (remainder * 10 + (ch - '0')) % div; // 각 문자를 숫자로 변환하여 나머지 계산
    }
    
    return remainder;
}

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore(); // 입력 버퍼 비우기
    
    for (int t = 0; t < test_cases; ++t) {
        string n, x;
        cin >> n >> x;
        cout << "Case " << (t + 1) << ": " << compute(n, x) << endl;
    }
    
    return 0;
}
