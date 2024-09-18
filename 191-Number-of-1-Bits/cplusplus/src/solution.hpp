#include <cstdint>

class Solution {
public:
    int hammingWeight(int n) {
        unsigned int m = n;
        int count = 0;
        while (m != 0) {
            count += m & 1;
            m >>= 1;
        }
        return count;
    }
};