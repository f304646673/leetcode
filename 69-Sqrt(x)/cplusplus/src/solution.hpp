class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int num = x;
        int i = 1;
        for (; num > 0; i++) {
            num >>= 1;
        }
        
        int start = 0;
        if (i > 2) {
            start = 1 << (i / 2 - 1);
        } else {
            start = 1 << 0;
        }

        int end = start << 1;
        return binarySearch(start, end, x);
    }
private:
    int binarySearch(unsigned long long start, unsigned long long end, unsigned long long x) {
        unsigned long long mid = (start + end) / 2;

        if (start > end) return end;

        unsigned long long result = mid * mid;
        if (result == x) return mid;
        if (result < x) return binarySearch(mid + 1, end, x);
        return binarySearch(start, mid - 1, x);
    }
};