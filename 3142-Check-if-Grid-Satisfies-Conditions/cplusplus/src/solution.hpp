#include <vector>
using namespace std;

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        for (int i  = 0; i < grid[0].size() - 1; i++) {
            if (grid[0][i] == grid[0][i+1]) {
                return false;
            }
        }

        for (int i  = 0; i < grid[0].size(); i++) {
            for (int j = 1; j < grid.size(); j++) {
                if (grid[0][i] != grid[j][i]) {
                    return false;
                }
            }
        }
        return true;
    }
};