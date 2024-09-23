#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> result;
        priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<int, vector<int>, less<int>> pq2;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            pq2.push(nums[i]);
        }

        for (int i = 0; i < nums.size() / 2; i++) {
            result.push_back((pq.top() + pq2.top()) / 2.0);
            pq.pop();
            pq2.pop();
        }
        return *min_element(result.begin(), result.end());
    }
};