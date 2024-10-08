// #include <string>
// #include <map>
// using namespace std;

// struct SubString {
//     map<char, int> charIndex;
//     SubString() {}
//     SubString(const string& s, int start, int end) {
//         for (int i = start; i <= end; i++) {
//             Insert(s[i], i);
//         }
//     }
//     void Insert(char c, int index) {
//         charIndex[c] = index;
//     }
//     auto Length() -> int {
//         return charIndex.size();
//     }
// };

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         SubString subString;
//         SubString maxSubString;
//         for (int i = 0; i < s.size(); i++) {
//             if (auto it = subString.charIndex.find(s[i]); it == subString.charIndex.end()) {
//                 subString.Insert(s[i], i);
//             } else {
//                 if (subString.Length() > maxSubString.Length()) {
//                     maxSubString = subString;
//                 } 
//                 subString = SubString(s, it->second + 1, i);
//             }
//         }

//         if (subString.Length() > maxSubString.Length()) {
//             maxSubString = subString;
//         } 

//         return maxSubString.Length();
//     }
// };

#include <string>
#include <array>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array<int, 128> charIndex;
        charIndex.fill(-1);
        int start = 0;
        int maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (charIndex[int(s[i])] >= start) {
                maxLen = max(maxLen, i - start);
                start = charIndex[int(s[i])] + 1;
            }
            charIndex[int(s[i])] = i;
        }

        if (s.size() - start > maxLen) {
            maxLen = s.size() - start;
        }
        
        return maxLen;
    }
};