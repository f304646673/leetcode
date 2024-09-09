#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto haystackSize = haystack.size();
        auto needleSize = needle.size();
        if (haystackSize < needleSize) {
            return -1;
        }
        if (needleSize == 0) {
            return 0;
        }
        for (auto i = 0; i < haystackSize - needleSize + 1; i++) {
            bool found = true;
            for (auto j = 0; j < needleSize; j++) {
                if (haystack[i+j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return i;
            }
        }
        return -1;
    }
};