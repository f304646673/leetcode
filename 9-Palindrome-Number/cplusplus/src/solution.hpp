#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        std::vector<int> v;
        while (x != 0) {
            v.push_back(x % 10);
            x /= 10;
        }

        int left = 0;
        int right = v.size() - 1;
        while (left < right) {
            if (v[left] != v[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

// public:
    // bool isPalindrome(int x) {
    //     if (x < 0) {
    //         return false;
    //     }

    //     long long reverse = 0;
    //     int original = x;
    //     while (x != 0) {
    //         reverse = reverse * 10 + x % 10;
    //         x /= 10;
    //     }
    //     return reverse == original;
    // }

// public:
    // bool isPalindrome(int x) {
    //     int count = 0;
    //     if (x >= 0 && x < 10) {
    //         return true;
    //     } else if (x >= 10 && x < 100) {
    //         count = 2;
    //     } else if (x >= 100 && x < 1000) {
    //         count = 3;
    //     } else if (x >= 1000 && x < 10000) {
    //         count = 4;
    //     } else if (x >= 10000 && x < 100000) {
    //         count = 5;
    //     } else if (x >= 100000 && x < 1000000) {
    //         count = 6;
    //     } else if (x >= 1000000 && x < 10000000) {
    //         count = 7;
    //     } else if (x >= 10000000 && x < 100000000) {
    //         count = 8;
    //     } else if (x >= 100000000 && x < 1000000000) {
    //         count = 9;
    //     } else if (x >= 1000000000 && x < 2147483648) {
    //         count = 10;
    //     } else {
    //         return false;
    //     }

    //     int pushCount = count / 2;
    //     int popCount = pushCount;

    //     stack<int> s;
    //     while (pushCount > 0) {
    //         s.push(x % 10);
    //         x /= 10;
    //         pushCount--;
    //     }

    //     if (count % 2 != 0) {
    //         x /= 10;
    //     }

    //     while (popCount > 0) {
    //         if (s.top() != x % 10) {
    //             return false;
    //         }
    //         s.pop();
    //         x /= 10;
    //         popCount--;
    //     }
    //     return true;
    // }
};