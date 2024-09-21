#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        for (int num : nums) {
            if (num > 9) {
                doubleDigitSum += num;
            } else {
                singleDigitSum += num;
            }
        }
        return doubleDigitSum != singleDigitSum;
    }
};