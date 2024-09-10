class Solution {
public:
    int climbStairs(int n) {
        int prev1 = 1, prev2 = 2;
        if (n == 1) {
            return prev1;
        }
        if (n == 2) {
            return prev2;
        }
        for (int i = 3; i < n; i++) {
            prev2 = prev1 + prev2;
            prev1 = prev2 - prev1;
        }
        return prev1 + prev2;
    }
};