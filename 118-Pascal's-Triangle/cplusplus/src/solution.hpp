#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});
        for (int i = 2; i <= numRows; i++) {
            vector<int> row(i, 1);
            adjacent_difference(result[i-2].begin(), result[i-2].end(), row.begin(), plus<int>());
            result.push_back(row);
        }
        return result;
    }
};