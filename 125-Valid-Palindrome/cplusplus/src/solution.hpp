#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            if ((isalpha(s[start]) || isdigit(s[start])) && (isalpha(s[end]) || isdigit(s[end]))) {
                if (tolower(s[start]) == tolower(s[end])) {
                    start++;
                    end--;
                    continue;
                } 
                return false;
            } else if (isalpha(s[start]) || isdigit(s[start])) {
                end--;
            } else if (isalpha(s[end]) || isdigit(s[end])) {
                start++;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};