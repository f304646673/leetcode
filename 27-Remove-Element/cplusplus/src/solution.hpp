#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int v : nums) {
            if (v != val) {
                nums[index++] = v;
            }
        }
        return index;
    }
};