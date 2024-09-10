#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool preIsSpace = true; // if the previous character is space
        int cur = 0;
        int lastWordStart = 0;
        int lastWordEnd = 0;
        for (char c : s) {
            if (c == ' ') {
                if (!preIsSpace) {
                    lastWordEnd = cur;
                }
                preIsSpace = true;
            } else {
                if (preIsSpace) {
                    lastWordStart = cur;
                }
                preIsSpace = false;
            }
            cur++;
        }
        if (!preIsSpace) {
            lastWordEnd = cur;
        }
        return lastWordEnd - lastWordStart;
    }
};