#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find Nth root of M
    int nthRoot(int n, int m) {
        // Loop from 1 to m
        for (int i = 1; i <= m; i++) {
            // Compute i^n
            long long power = pow(i, n);

            // If equal to m, return i
            if (power == m) return i;

            // If exceeds m, break
            if (power > m) break;
        }

        // If not found, return -1
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 3, m = 27;

    // Find nth root
    cout << "Nth Root: " << sol.nthRoot(n, m) << endl;

    return 0;
}