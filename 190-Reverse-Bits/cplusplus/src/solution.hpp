#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int offset = -1;
        while (n != 0) {
            offset++;
            if (n & 0x80000000) {
                result |= 1 << offset;
            }
            n <<= 1;
        }
        return result;
    }
};