#include <iostream>
using namespace std;

class Solution {
public:
    int s[38] = {0, 1, 1};
    int tribonacci(int n) {
        if (n <= 0) return 0;
        if (s[n]) return s[n];
        return s[n] = tribonacci(n -1) + tribonacci(n-2) + tribonacci(n-3);
    }
};

// main is used for testing solution from local/ outside leetcode's IDE
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution sol;
    int n;
    cin >> n;
    cout << sol.tribonacci(n) << endl;

    return 0;
}
