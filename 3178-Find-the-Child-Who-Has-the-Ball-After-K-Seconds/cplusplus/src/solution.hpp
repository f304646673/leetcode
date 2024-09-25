class Solution {
public:
    int numberOfChild(int n, int k) {
        auto x = k % (2 * n - 2) ;
        if (x < n) {
            return x;
        } else {
            return n - 1 - (x  - (n - 1));
        }
    }
};