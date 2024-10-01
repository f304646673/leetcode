#include <vector>
#include <numeric>  // for std::accumulate
#include <algorithm> // for std::min_element
using namespace std;

class Solution {
public:
    // int addedInteger(vector<int>& nums1, vector<int>& nums2) {
    //     return (accumulate(nums2.begin(), nums2.end(), 0) - accumulate(nums1.begin(), nums1.end(), 0)) / static_cast<long>(nums1.size());
    // }
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        return *min_element(nums2.begin(), nums2.end()) - *min_element(nums1.begin(), nums1.end());
    }
};