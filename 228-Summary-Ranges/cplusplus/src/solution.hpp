#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        if (nums.size() == 0) {
            return res;
        }

        long start = nums[0];
        long current = start + 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != current) {
                string s = to_string(start);
                if (current - 1 != start) {
                    s = s + "->" + to_string(current - 1);
                }
                res.push_back(s);

                start = nums[i];
                current = start + 1;
            } else {
                current++;
            }
        }

        string s = to_string(start);
        if (current - 1 != start) {
            s = s + "->" + to_string(current - 1);
        }
        res.push_back(s);

        return res;
    }
};