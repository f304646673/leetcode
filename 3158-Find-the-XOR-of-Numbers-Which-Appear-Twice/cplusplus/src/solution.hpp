#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s;
        for (int i : nums) {
            if (s.find(i) != s.end()) {
                result ^= i;
            } else {
                s.insert(i);
            }
        }
        return result;
    }
};