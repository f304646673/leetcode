#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int result = 0;
        vector<int> sCount(26, 0);
        for (int i = 0; i < s.size(); i++) {
            sCount[s[i] - 'a'] = i;
        }
        for (int i = 0; i < t.size(); i++) {
            result += abs(i - sCount[t[i] - 'a']);
        }
        return result;
    }
};