#include <vector>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int firstParity = *nums.begin() & 0x01;
        int secondParity = firstParity == 1 ? 0 : 1;
        vector<int> paritys = {firstParity, secondParity};
        for (int i = 1; i < nums.size(); i++) {
            if ((nums[i] & 0x01) != paritys[i % 2]) {
                return false;
            }
        }
        return true;
    }
};