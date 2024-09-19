#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> result;
        for (auto num : nums) {
            if (s.find(num) == s.end()) {
                s.insert(num);
            } else {
                result.push_back(num);
            }
        } 
        return result;    
    }
};