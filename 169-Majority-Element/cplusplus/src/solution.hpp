#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int, int> m;
//         for (int i = 0; i < nums.size(); i++) {
//             m[nums[i]]++;
//             if (m[nums[i]] > nums.size() / 2) {
//                 return nums[i];
//             }
//         }
//         return 0;
//     }
};