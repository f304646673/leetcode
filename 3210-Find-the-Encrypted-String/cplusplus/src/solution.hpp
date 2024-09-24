#include <string>
using namespace std;

class Solution {
public:
    string getEncryptedString(string s, int k) {
        string result = s;
        for (int i = 0; i < s.size(); i++) {
            result[i] = s.at((i + k) % s.size());
        }
        return result;
    }
};