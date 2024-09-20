#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    // vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    //     vector<int> result(nums);
    //     for (int i = 0; i < k; i++) {
    //         auto minElementIter = min_element(result.begin(), result.end());
    //         *minElementIter *= multiplier;
    //     }
    //     return result;
    // }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        using pii = pair<int, int>;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }
        while (k--) {
            auto [value, index] = pq.top();
            pq.pop();
            pq.push({value * multiplier, index});
        }
        vector<int> result(nums.size());
        while (!pq.empty()) {
            auto [value, index] = pq.top();
            pq.pop();
            result[index] = value;
        }
        return result;
    }
};