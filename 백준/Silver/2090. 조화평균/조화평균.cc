#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    long long lcm_val = 1;
    long long numerator = 0;
    long long denominator = 0;
    
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        lcm_val = lcm(lcm_val, nums[i]);
    }
    
    numerator = lcm_val;
    
    for (int i = 0; i < n; i++) {
        denominator += (lcm_val / nums[i]);
    }
    
    long long gcd_val = gcd(numerator, denominator);
    
    numerator /= gcd_val;
    denominator /= gcd_val;
    
    cout << numerator << "/" << denominator << endl;
    
    return 0;
}
