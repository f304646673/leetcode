#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            if (auto it = num_map.find(nums[i]); it != num_map.end()) {
                return {it->second, i};
            }
            num_map[target - nums[i]] = i;
        }
        return {-1, -1};
    }
};