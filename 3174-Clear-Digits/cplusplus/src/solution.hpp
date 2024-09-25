#include <string>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9' && result.size() > 0) {
                result = result.substr(0, result.size() - 1);
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                result += s[i];
            }
        }
        return result;
    }
};