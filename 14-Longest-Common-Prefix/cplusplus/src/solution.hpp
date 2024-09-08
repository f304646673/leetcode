#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int numStrings = strs.size();
        if (numStrings == 0) {
            return "";
        }
        if (numStrings == 1) {
            return strs[0];
        }

        string prefix = "";
        int charIndex = 0;
        for (char currentChar: strs[0]) {
            for (int i = 1; i < numStrings; i++) {
                if (charIndex >= strs[i].size() || strs[i][charIndex] != currentChar) {
                    return prefix;
                }
            }
            prefix += currentChar;
            charIndex++;
        }
        
        return prefix;
    }
};