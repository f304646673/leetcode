#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size() - 1;
        return binarySearch(nums, target, 0, right);
    }
private:
    int binarySearch(const vector<int>& nums, int target, int left, int right) {
        if (left > right) {
            return left;
        }
        
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            return binarySearch(nums, target, mid + 1, right);
        } else {
            return binarySearch(nums, target, left, mid - 1);
        }
    }
};