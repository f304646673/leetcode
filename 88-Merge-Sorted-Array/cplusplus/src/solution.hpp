#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto nums1Index = m - 1;
        auto nums2Index = n - 1;
        auto nums1InsertIndex = m + n - 1;
        while (true) {
            if (nums1Index < 0 && nums2Index < 0) {
                break;
            } else if (nums1Index >= 0 && nums2Index >= 0) {
                if (nums1[nums1Index] > nums2[nums2Index]) {
                    nums1[nums1InsertIndex--] = nums1[nums1Index--];
                } else {
                    nums1[nums1InsertIndex--] = nums2[nums2Index--];
                }
            } else if (nums1Index >= 0) {
                break;
            } else {
                nums1[nums1InsertIndex--] = nums2[nums2Index--];
            }
        }
    }
};