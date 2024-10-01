#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;
        }
        bool vowel = false;
        bool consonant = false;
        for (char c : word) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowel = true;
            } else if ( (c >= 'a' && c <= 'z')
                || (c >= 'A' && c <= 'Z'))
            {
                consonant = true;
            } 
            else if (c >= '0' && c <= '9') {
                continue;
            }
            else {
                return false;
            }
        }
        return vowel && consonant;
    }
};