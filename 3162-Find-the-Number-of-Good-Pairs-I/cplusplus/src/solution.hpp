#include <vector>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int result = 0;
        for (int i : nums1) {
            for (int j : nums2) {
                if (i % (j * k) == 0) {
                    result++;
                }
            }
        }
        return result;
    }
};